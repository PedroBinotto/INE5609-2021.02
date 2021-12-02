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

DoublyLinkedList::DoublyLinkedList(void) : cursor(head) {
    Node *ptr1, *ptr2;

    head = &ptr1;
    tail = &ptr2;
    cursor = Cursor(head);
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
    } else {
        (*head) = node;
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
    } else {
        (*tail) = node;
    }

    node->setPrevNode(current);
    current->setNextNode(node);
}

void DoublyLinkedList::insertFirst(Node *node) {
    // TODO: redocumentar
    cursor.goToHead();
    insertBeforeCurrent(node);
}

void DoublyLinkedList::insertLast(Node *node) {
    // TODO: redocumentar
    cursor.goToHead();
    insertAfterCurrent(node);
}

void DoublyLinkedList::insertAtIndex(long index, Node *node) {
    // TODO: redocumentar
    cursor.goToHead();
    cursor.proceedNPositions(index);
    insertBeforeCurrent(node);
}

void DoublyLinkedList::removeCurrent(void) {
    Node *current = cursor.getCurrentNode();
    if (current == NULL) {
        return;
    }

    Node *prev = current->getPrevNode();
    Node *next = current->getNextNode();

    if (prev != NULL) {
        cursor.regressNPositions(1);
        prev->setNextNode(next);
    } else {
        if (next != NULL) {
            (*head) = next;
            cursor.proceedNPositions(1);
        } else {
            (*head) = NULL;
            (*tail) = NULL;
            cursor.goToHead();
        }
    }

    if (next == NULL) {
        if (prev != NULL) {
            (*tail) = prev;
            cursor.regressNPositions(1);
        } else {
            (*head) = NULL;
            (*tail) = NULL;
            cursor.goToHead();
        }
    } else {
        next->setPrevNode(prev);
    }

    delete current;
}

void DoublyLinkedList::removeFirst(void) {
    // TODO: redocumentar
    cursor.goToHead();
    removeCurrent();

}

void DoublyLinkedList::removeLast(void) {
    // TODO: redocumentar
    cursor.goToTail();
    removeCurrent();
}

void DoublyLinkedList::removeByKey(long key) {
    cursor.goToHead();
    while (cursor.getCurrentNode()->getKey() != key) {
        if (cursor.getCurrentNode()->getNextNode() != NULL) {
            cursor.proceedNPositions(1);
        } else {
            return;
        }
    }
    removeCurrent();
}

void DoublyLinkedList::removeFromIndex(long index) {
    cursor.goToHead();
    cursor.proceedNPositions(index);
    removeCurrent();
}

bool DoublyLinkedList::search(long key) {
    if ((*head) == NULL) {
        return false;
    }

    Node *tmp = (*head);

    while (true) {
        if (tmp->getKey() == key) {
            return true;
        }

        if (tmp->getNextNode() != NULL) {
            tmp = tmp->getNextNode();
        } else {
            return false;
        }
    }
}

bool DoublyLinkedList::isEmpty(void) { return (*head) == NULL; }

bool DoublyLinkedList::isFull(void) { return false; }           // ?? nao faco ideia do que seja

long DoublyLinkedList::getIndexByKey(long key) {
    // utilizar cursor
    if ((*head) == NULL) {
        return -1;
    }

    Node *tmp = (*head);
    long index = 0;

    while (true) {
        if (tmp->getKey() == key) {
            return index;
        }

        if (tmp->getNextNode() != NULL) {
            index++;
            tmp = tmp->getNextNode();
        } else {
            return -1;
        }
    }
}

