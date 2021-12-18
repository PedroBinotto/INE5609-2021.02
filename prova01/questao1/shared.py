class Node:
    def __init__(self, text: str, next=None):
        self.__quant = 1
        self.__text = text
        self.__next = next

    @property
    def quant(self):
        return self.__quant

    @quant.setter
    def quant(self, quant):
        self.__quant = quant

    @property
    def text(self):
        return self.__text

    @property
    def next(self):
        return self.__next

    @next.setter
    def next(self, next):
        self.__next = next

class LinkedList:
    def __init__(self):
        self.__head: Node = None
        self.__tail: Node = None

    @property
    def head(self):
        return self.__head

    def __addElem(self, elem: Node):
        if self.__head == None:
            self.__head = elem
            self.__tail = elem
            return
        self.__tail.next = elem
        self.__tail = elem

    def storeWord(self, word: str):
        word = word.lower()
        tmp = self.__head
        if tmp == None:
            self.__addElem(Node(word))
            return
        while tmp.next is not None:
            if tmp.text == word:
                tmp.quant += 1
                return
            tmp = tmp.next
        self.__addElem(Node(word))

    def removeWord(self, word):
        pass

    def lookUpWord(self, word: str):
        word = word.lower()
        tmp = self.__head
        if tmp == None:
            return None
        pos = 0
        while tmp.next is not None:
            if tmp.text == word:
                return pos
            pos += 1
            tmp = tmp.next
        return None

class HashTable:
    def __init__(self, tableSize: int):
        self.__size = tableSize
        self.__table = [LinkedList()] * self.__size

    @staticmethod
    def __hash(val: str, max: int) -> int:
        return len(val) % max

    def storeWord(self, word: str):
        self.__table[self.__hash(word, self.__size)].storeWord(word)

    def removeWord(self, word):
        pass

    def lookUpWord(self, word: str):
        hash = self.__hash(word, self.__size)
        pos = self.__table[hash].lookUpWord(word)
        if pos == None:
            return None
        return hash, pos

class Reader:
    def __init__(self, textFile):
        text = textFile.open()
        self.__words = self.__parseFile(text)
        self.__cursorPos = 0
        text.close()

    def __parseFile(self, txt) -> list[str]:
        words = []
        for ln in txt:
            for word in ln.split():
                words.append(word)
        return words

    def readNextWord(self):
        if self.__cursorPos >= len(self.__words):
            return None
        word = self.__words[self.__cursorPos]
        self.__cursorPos += 1
        return word

