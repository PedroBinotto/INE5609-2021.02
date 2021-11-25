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
     */
    class DoublyLinkedList {
    private:
        Cursor cursor;
        Node *head;
        Node *tail;
        long counter;
    public:
        /**
         * Documentation block for method
         */
        DoublyLinkedList(void);

        /**
         * Documentation block for method
         */
        Node *getCurrentNode(void);

        /**
         * Documentation block for method
         */
        void insertBeforeCurrent(Node *node);

        /**
         * Documentation block for method
         */
        void insertAfterCurrent(Node *node);

        /**
         * Documentation block for method
         */
        void insertFirst(Node *node);

        /**
         * Documentation block for method
         */
        void insertLast(Node *node);

        /**
         * Documentation block for method
         */
        void insertAtIndex(long index, Node *node);

        /**
         * Documentation block for method
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

