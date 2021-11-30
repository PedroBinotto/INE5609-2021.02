/**
 * @file doublyLinkedList.cpp
 *
 * @brief Parte do projeto para a disciplina de Estruturas de Dados cod. INE5609
 *
 * @author Pedro Santi Binotto
 * Contact: pedro.binotto@grad.ufsc.br
 *
 * @author Joao Pedro Ziliotto Martinez
 * Contact: joao.ziliotto@grad.ufsc.br
 */

#include "doublyLinkedList.hpp"

using namespace dll;

// TODO: impl

DoublyLinkedList::DoublyLinkedList(void) {
    Node *ptr1, *ptr2;

    head = &ptr1;
    tail = &ptr2;
    cursor = Cursor((*head));
}

Node *DoublyLinkedList::getCurrentNode(void) {
    return cursor.getCurrentNode();
}

void DoublyLinkedList::insertBeforeCurrent(Node *node) { }
void DoublyLinkedList::insertAfterCurrent(Node *node) { }

void DoublyLinkedList::insertFirst(Node *node) { }
void DoublyLinkedList::insertLast(Node *node) { }
void DoublyLinkedList::insertAtIndex(long index, Node *node) { }

void DoublyLinkedList::removeCurrent(void) { }
void DoublyLinkedList::removeFirst(void) { }
void DoublyLinkedList::removeLast(void) { }

void DoublyLinkedList::removeByKey(long key) { }
void DoublyLinkedList::removeFromIndex(long index) { }

bool DoublyLinkedList::search(long key) { }
bool DoublyLinkedList::isEmpty(void) { }
bool DoublyLinkedList::isFull(void) { }           // ?? nao faco ideia do que seja
long DoublyLinkedList::getIndexByKey(long key) { }

