### ESTRUTURAS LINEARES
---

##### Compilação:

- Requisitos:
  - Compilador g++ (Coleção [GCC](https://gcc.gnu.org/))
  - [GNU Make](https://www.gnu.org/software/make/)

No **diretório raiz** do projeto, executar:

`$ make`

O arquivo executável final encontra-se em `<PROJETO>/bin/main`.

---

##### Estrutura do projeto:

```
<PROJETO>
├── bin             |  arquivos executáveis (binários)
├── Makefile        |  
├── obj             |  arquivos de build (libs estáticas)
├── README.md       | 
└── src             |  código fonte C++/headers
    ├── linkedList.cpp
    ├── linkedList.hpp
    ├── main.cpp
    ├── queue.cpp
    ├── queue.hpp
    └── stack.hpp
```


