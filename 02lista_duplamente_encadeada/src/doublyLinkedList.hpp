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
     * Documentation block for class
     *
     *
     */
    class DoublyLinkedList {
    private:
        Cursor cursor;
        Node *head;
        Node *tail;

    public:
        DoublyLinkedList(void);

        Node *getCurrentNode(void);

        void insertBeforeCurrent(Node *node);
        void insertAfterCurrent(Node *node);

        void insertFirst(Node *node);
        void insertLast(Node *node);
        void insertAtIndex(long index, Node *node);

        void removeCurrent(void);
        void removeFirst(void);
        void removeLast(void);

        void removeByKey(long key);
        void removeFromIndex(long index);

        bool search(long key);
        bool isEmpty(void);
        bool isFull(void);           // ?? nao faco ideia do que seja
        long getIndexByKey(long key);
    };
}

#endif

