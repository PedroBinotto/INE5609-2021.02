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
    class Node {
    public:
        Node(Node *nextNode=NULL, Node *prevNode=NULL, int val=0);

        int getValue(void);
        long getKey(void);
        Node *getPrevNode(void);
        Node *getNextNode(void);

        void setValue(int val);
        void setPrevNode(Node *nextNode);
        void setNextNode(Node *nextNode);
    private:
        long key;
        int value;
        Node *prev;
        Node *next;
    };
}

#endif

