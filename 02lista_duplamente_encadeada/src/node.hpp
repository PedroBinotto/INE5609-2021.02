/**
 * @file node.hpp
 *
 * @brief Parte do projeto para a disciplina de Estruturas de Dados cod. INE5609
 *
 * @author Pedro Santi Binotto
 * Contact: pedro.binotto@grad.ufsc.br
 *
 * @author Joao Pedro Ziliotto Martinez
 * Contact: joao.ziliotto@grad.ufsc.br
 */

#ifndef NODE_H
#define NODE_H

#include <string>

namespace dll {
    /**
     * Classe representativa do elemento de uma lista duplamente encadeada
     */
    class Node {
    private:
        long key;
        int value;
        Node *prev;
        Node *next;

        static long nextId;
        static long generateNextKey(void);
    public:
        /**
         * Construtor da classe (default constructor)
         */
        Node(int val=0, Node *nextNode=NULL, Node *prevNode=NULL);

        /**
         * Metodo que retorna o valor associado com o nodo
         *
         * @returns Valor numerico armazenado no campo privado 'value'
         *     do elemento
         */
        int getValue(void);

        /**
         * Metodo que retorna a chave de identificacao unica do nodo
         *
         * @returns Valor armazenado no campo privado 'key'
         *     do elemento
         */
        long getKey(void);

        /**
         * Metodo que retorna o elemento anterior na lista encadeada
         *
         * @returns Ponteiro para nodo armazenado no campo privado
         *     'prev' do elemento ou NULL quando nao ha um elemento
         *     associado
         */
        Node *getPrevNode(void);

        /**
         * Metodo que retorna o elemento posterior na lista encadeada
         *
         * @returns Ponteiro para nodo armazenado no campo privado
         *     'next' do elemento ou NULL quando nao ha um elemento
         *     associado
         */
        Node *getNextNode(void);

        /**
         * Metodo que permite atribuir um valor numerico ao nodo
         *
         * @param val Valor a ser armazenado no campo privado
         *     'value' do elemento
         */
        void setValue(int val);

        /**
         * Metodo que permite encadear um elemento anteriormente ao nodo
         *     na lista encadeada
         *
         * @param node Ponteiro para nodo a ser armazenado
         *     no campo privado 'prev' do elemento
         */
        void setPrevNode(Node *node);

        /**
         * Metodo que permite encadear um elemento posteriormente ao nodo
         *     na lista encadeada
         *
         * @param node Ponteiro para nodo a ser armazenado
         *     no campo privado 'next' do elemento
         */
        void setNextNode(Node *node);
    };
}

// TODO: implementar NodeFactory

#endif

