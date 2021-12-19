from pathlib import Path
from shared import LinkedList, Reader

# Questao 1 - Item a)
def itemA():
    scriptLocation = Path(__file__).absolute().parent
    fileLocation = scriptLocation / 'textoExemplo.txt'

    lista = LinkedList()
    r = Reader(fileLocation)
    while True:
        el = r.readNextWord()
        if el == None:
            break
        lista.storeWord(el)

    tmp = lista.head
    while True:
        print( f"""{{ PALAVRA: '{tmp.text}', QUANTIDADE: {tmp.quant} }},""")
        if tmp.next == None:
            return
        tmp = tmp.next

def itemABenchmark():
    scriptLocation = Path(__file__).absolute().parent
    fileLocation = scriptLocation / 'biglebowski.txt'

    lista = LinkedList()
    r = Reader(fileLocation)
    while True:
        el = r.readNextWord()
        if el == None:
            break
        lista.storeWord(el)

    lista.lookUpWord('dude')
    lista.lookUpWord('opinion')
    lista.lookUpWord('dollars')
    lista.lookUpWord('vietnam')

if __name__ == '__main__':
    itemABenchmark()

