/**
 * @file doublyLinkedList.hpp
 *
 * @brief Parte do projeto para a disciplina de Estruturas de Dados cod. INE5609
 *
 * @author Pedro Santi Binotto
 * Contact: pedro.binotto@grad.ufsc.br
 *
 * @author Joao Pedro Ziliotto Martinez
 * Contact: joao.ziliotto@grad.ufsc.br
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "cursor.hpp"

namespace dll {
    /**
     * Classe representativa de uma lista duplamente encadeada
     */
    class DoublyLinkedList {
    private:
        Cursor cursor;
        Node **head;
        Node **tail;
        long currentSize;

        // TODO: implementar destructor -> freeList(void)->[tambem por fazer]
        // TODO: Re-documentar metodos onde o cursor sera utilizado na operacao
    public:
        /**
         * Construtor da classe (no-args constructor)
         */
        DoublyLinkedList(void);

        /**
         * Retorna elemento atual para qual o cursor da lista esta aponta
         *
         * @returns Ponteiro para nodo atual atribuido ao cursor ou NULL
         *     em caso de uma lista vazia
         */
        Node *getCurrentNode(void);

        /**
         * Metodo que permite inserir um nodo na posicao anterior ao atual
         *     elemento da lista para qual o cursor esta apontando
         *
         * @note Elemento adicionado a posicao HEAD e TAIL no caso de uma
         *     lista vazia
         * @param node Elemento a ser adicionado a lista
         */
        void insertBeforeCurrent(Node *node);

        /**
         * Metodo que permite inserir um nodo na posicao posterior ao atual
         *     elemento da lista para qual o cursor esta apontando
         *
         * @note Elemento adicionado a posicao HEAD e TAIL no caso de uma
         *     lista vazia
         * @param node Elemento a ser adicionado a lista
         */
        void insertAfterCurrent(Node *node);

        /**
         * Metodo que permite adicionar um elemento a primeira posicao
         *     (HEAD) da lista encadeada
         *
         * @note Elemento sera adicionado a posicao HEAD e TAIL no caso de
         *     uma lista vazia
         * @param node Elemento a ser adicionado a lista
         */
        void insertFirst(Node *node);

        /**
         * Metodo que permite adicionar um elemento a ultima posicao
         *     (TAIL) da lista encadeada
         *
         * @note Elemento sera adicionado a posicao HEAD e TAIL no caso de
         *     uma lista vazia
         * @param node Elemento a ser adicionado a lista
         */
        void insertLast(Node *node);

        /**
         * Metodo que permite inserir um elemento em dada posicao da lista
         *     com base em um indice
         *
         * @note Em caso de uma lista vazia, o elemento sera adicionado as
         *     posicoes HEAD e TAIL
         * @param index Indice numerico (base zero) representativo da
         *     posicao na lista onde o sera inserido
         * @param node Elemento a ser adicionado a lista
         */
        void insertAtIndex(long index, Node *node);

        /**
         * Metodo que permite remover o elemento atual para o qual o cursor
         *     da lista esta apontando
         *
         * @note O cursor sera movido para a posicao anterior na lista ao
         *     remover o elemento atual, HEAD em casos onde restam apenas
         *     um elemento na lista, ou NULL se executado em uma lista com
         *     apenas um elemento. Nao gerara excecoes se executado em uma
         *     lista previamente vazia
         */
        void removeCurrent(void);

        /**
         * Metodo que permite remover (liberar) o elemento na primeira posicao
         *     da lista
         *
         * @note HEAD sera atribuido ao elemento seguinte na lista, ou NULL no
         *     caso do metodo ser executado em uma lista com um unico elemento.
         *     O mesmo comportamento aplica-se ao cursor caso este esteja
         *     apontando para o primeiro elemento da lista.
         */
        void removeFirst(void);

        /**
         * Metodo que permite remover (liberar) o elemento na ultima posicao
         *     da lista
         *
         * @note TAIL sera atribuido ao elemento anterior na lista, ou NULL no
         *     caso do metodo ser executado em uma lista com um unico elemento.
         *     O mesmo comportamento aplica-se ao cursor caso este esteja
         *     apontando para o ultimo elemento da lista.
         */
        void removeLast(void);

        /**
         * Metodo que permite remover (liberar) um elemento da lista com base
         *     na chave de identificacao unica do nodo
         *
         * @note Nenhuma alteracao sera realizada se executado em uma chave
         *     invalida ou lista vazia
         * @param key Chave de identificacao numerica correspondente ao elemento
         *     que se deseja remover
         */
        void removeByKey(long key);

        /**
         * Metodo que permite remover (liberar) um elemento da lista com base
         *     no indice posicional do nodo dentro da lista
         *
         * @note Nenhuma alteracao sera realizada se executado em um indice
         *     invalido invalida ou lista vazia
         * @param index Indice numerico (sequencial, base-zero) de identificacao
         *     correspondente a posicao na lista do elemento que se deseja
         *     remover
         */
        void removeFromIndex(long index);

        /**
         * Metodo que permite buscar por um elemento em especifico na lista
         *     com base na chave unica de identificacao associada ao nodo em
         *     questao
         *
         * @param key Chave de identificacao numerica correspondente ao
         *     elemento desejado
         * @returns 'true' se o elemento estiver presente na lista,
         *     caso contrario, 'false'
         */
        bool search(long key);

        /**
         * Metodo que permite checar se a lista esta vazia, ou seja, nao possui
         *     elemento nenhum no momento de execucao do metodo
         *
         * @returns 'true' caso a lista nao possua elementos,
         *     caso contrario, 'false'
         */
        bool isEmpty(void);

        /**
         * !!! TODO: EM CONSTRUCAO
         */
        bool isFull(void);

        /**
         * Metodo que retorna a chave de identificacao de um elemento com base
         *     em seu indice posicional dentro da lista encadeada
         *
         * @param key Chave de identificacao numerica correspondente ao elemento
         *     desejado
         * @returns Indice correspondente a posicao ocupada pelo elemento
         *     identificado pela chave 'key', caso presente na lista;
         *     caso contrario, '-1'
         */
        long getIndexByKey(long key);
    };
}

#endif

