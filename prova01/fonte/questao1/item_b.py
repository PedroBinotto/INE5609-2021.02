from pathlib import Path
from shared import HashTable, Reader

def itemB():
    scriptLocation = Path(__file__).absolute().parent
    fileLocation = scriptLocation / 'biglebowski.txt'

    tabela = HashTable(10)
    r = Reader(fileLocation)
    while True:
        el = r.readNextWord()
        if el == None:
            break
        tabela.storeWord(el)

    tabela.lookUpWord('dude')
    tabela.lookUpWord('opinion')
    tabela.lookUpWord('dollars')
    tabela.lookUpWord('vietnam')

if __name__ == '__main__':
    itemB()

