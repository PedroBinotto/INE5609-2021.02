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

        // TODO: implementar destructor -> freeList(void)->[tambem por fazer]
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
         * Documentation block for method
         */
        void removeFirst(void);

        /**
         * Documentation block for method
         */
        void removeLast(void);

        /**
         * Documentation block for method
         */
        void removeByKey(long key);

        /**
         * Documentation block for method
         */
        void removeFromIndex(long index);

        /**
         * Documentation block for method
         */
        bool search(long key);

        /**
         * Documentation block for method
         */
        bool isEmpty(void);

        /**
         * Documentation block for method
         */
        bool isFull(void);

        /**
         * Documentation block for method
         */
        long getIndexByKey(long key);
    };
}

#endif

