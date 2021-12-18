from pathlib import Path
from shared import HashTable, Reader

def itemB():
    scriptLocation = Path(__file__).absolute().parent
    fileLocation = scriptLocation / 'textoExemplo.txt'

    tabela = HashTable(10)
    r = Reader(fileLocation)
    while True:
        el = r.readNextWord()
        if el == None:
            break
        tabela.storeWord(el)

    # TODO: Demonstracao
