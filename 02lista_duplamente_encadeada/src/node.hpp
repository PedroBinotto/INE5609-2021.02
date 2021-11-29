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
     * Documentation block for class
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
         * Documentation block for method
         */
        Node(int val=0, Node *nextNode=NULL, Node *prevNode=NULL);

        /**
         * Documentation block for method
         */
        int getValue(void);

        /**
         * Documentation block for method
         */
        long getKey(void);

        /**
         * Documentation block for method
         */
        Node *getPrevNode(void);

        /**
         * Documentation block for method
         */
        Node *getNextNode(void);

        /**
         * Documentation block for method
         */
        void setValue(int val);

        /**
         * Documentation block for method
         */
        void setPrevNode(Node *node);

        /**
         * Documentation block for method
         */
        void setNextNode(Node *node);
    };
}

#endif

