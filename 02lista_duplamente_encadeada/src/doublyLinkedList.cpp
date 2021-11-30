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
#include <iostream>

using namespace dll;

DoublyLinkedList::DoublyLinkedList(void) {
    Node *ptr1, *ptr2;

    head = &ptr1;
    tail = &ptr2;
    cursor = Cursor((*head));
}

Node *DoublyLinkedList::getCurrentNode(void) {
    return cursor.getCurrentNode();
}

void DoublyLinkedList::insertBeforeCurrent(Node *node) {
    Node *current = cursor.getCurrentNode();
    if (current == NULL) {
        head = &node;
        tail = &node;
        cursor.goToHead();
        return;
    }

    Node *prev = current->getPrevNode();
    if (prev != NULL) {
        prev->setNextNode(node);
        node->setPrevNode(prev);
    }

    node->setNextNode(current);
    current->setPrevNode(node);
}

void DoublyLinkedList::insertAfterCurrent(Node *node) {
    Node *current = cursor.getCurrentNode();
    if (current == NULL) {
        head = &node;
        tail = &node;
        cursor.goToHead();
        return;
    }

    Node *next = current->getNextNode();
    if (next != NULL) {
        next->setPrevNode(node);
        node->setNextNode(next);
    }

    node->setPrevNode(current);
    current->setNextNode(node);
}

void DoublyLinkedList::insertFirst(Node *node) {
    if ((*head) != NULL) {
        (*head)->setPrevNode(node);
        node->setNextNode((*head));
        head = &node;
        return;
    }
    head = &node;
    tail = &node;
}

void DoublyLinkedList::insertLast(Node *node) {
    if ((*tail) != NULL) {
        (*tail)->setNextNode(node);
        node->setPrevNode((*tail));
        tail = &node;
        return;
    }
    head = &node;
    tail = &node;
}

void DoublyLinkedList::insertAtIndex(long index, Node *node) {
    for (int i = 0; i < index; i++) {
         // TODO
    }
}

void DoublyLinkedList::removeCurrent(void) {
    // TODO: possivelmente refatorar e revisar oqq acontece caso a lista so tenha tipo um ou dois caras
    Node *current = cursor.getCurrentNode();
    Node *prev = current->getPrevNode();
    Node *next = current->getNextNode();

    if (prev != NULL) {
        cursor.regressNPositions(1);
        prev->setNextNode(next);
    } else if (next != NULL) {
        cursor.proceedNPositions(1);
    } else {
        (*head) = NULL;
        (*tail) = NULL;
        cursor.setCurrentToNull();
    }

    if (next != NULL) {
        next->setPrevNode(prev);
    }

    delete current;
}

void DoublyLinkedList::removeFirst(void) {
    // FIXME: isso aq nem ta pronto
    if ((*head) == NULL) { return; }
    Node *next = cursor.getCurrentNode()->getNextNode();
    Node *second = (*head)->getNextNode();
    delete (*head);
}
void DoublyLinkedList::removeLast(void) {
    
}

void DoublyLinkedList::removeByKey(long key) { }
void DoublyLinkedList::removeFromIndex(long index) { }

bool DoublyLinkedList::search(long key) { }
bool DoublyLinkedList::isEmpty(void) { return (*head) == NULL; }
bool DoublyLinkedList::isFull(void) { return false; }           // ?? nao faco ideia do que seja
long DoublyLinkedList::getIndexByKey(long key) { }

