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
    if ((*head) == NULL) {
        head = &node;
        tail = &node;
        cursor.goToHead();
        return;
    }

    Node *tmp = (*head);

    for (int i = 0; i < index; i++) {
        if (tmp->getNextNode() != NULL) {
            tmp = tmp->getNextNode();
        } else {
            tmp->setNextNode(node);
            node->setPrevNode(tmp);
            return;
        }
    }

    if (tmp->getPrevNode() != NULL) {
        Node *prevNode = tmp->getPrevNode();
        prevNode->setNextNode(node);
        node->setPrevNode(prevNode);
    }

    node->setNextNode(tmp);
    tmp->setPrevNode(node);
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
    if ((*head) == NULL) { return; }
    Node *second = (*head)->getNextNode();

    if (second != NULL) {
        if (cursor.getCurrentNode() == (*head)) {
            cursor.proceedNPositions(1);
        }
        delete (*head);
        (*head) = second;
    } else {
        cursor.setCurrentToNull();
        delete (*head);
        (*head) = NULL;
        (*tail) = NULL;
    }
}

void DoublyLinkedList::removeLast(void) {
    if ((*tail) == NULL) { return; }
    Node *secondToLast = (*tail)->getPrevNode();

    if (secondToLast != NULL) {
        if (cursor.getCurrentNode() == (*tail)) {
            cursor.regressNPositions(1);
        }
        delete (*tail);
        (*tail) = secondToLast;
    } else {
        cursor.setCurrentToNull();
        delete (*tail);
        (*head) = NULL;
        (*tail) = NULL;
    }
}

void DoublyLinkedList::removeByKey(long key) {
    if ((*head) == NULL) { return; }

    Node *tmp = (*head);

    while (true) {
        if (tmp->getKey() == key) {
            handleRemove(tmp);
            return;
        }

        if (tmp->getNextNode() != NULL) {
            tmp = tmp->getNextNode();
        } else {
            return;
        }
    }
}

void DoublyLinkedList::removeFromIndex(long index) {
    if ((*head) == NULL) { return; }

    Node *tmp = (*head);

    for (int i = 0; i < index; i++) {
        if (tmp->getNextNode() != NULL) {
            tmp = tmp ->getNextNode();
        }
    }
    handleRemove(tmp);
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

void DoublyLinkedList::handleRemove(Node *node) {
    Node *prevNode = node->getPrevNode();
    Node *nextNode = node->getNextNode();

    int _case;

    if (nextNode == NULL && prevNode == NULL) {
        _case = 0;
    } else if (prevNode == NULL) {
        _case = 1;
    } else if (nextNode == NULL) {
        _case = 2;
    } else {
        _case = 3;
    }

    switch(_case) {
        case 0 : cursor.setCurrentToNull();
                 (*head) = NULL;
                 (*tail) = NULL;
                 break;
        case 1 :
                 (*head) = nextNode;
                 nextNode->setPrevNode(NULL);
                 if (cursor.getCurrentNode() == node) {
                     cursor.proceedNPositions(1);
                 }
                 break;
        case 2 :
                 (*tail) = prevNode;
                 prevNode->setNextNode(NULL);
                 if (cursor.getCurrentNode() == node) {
                     cursor.regressNPositions(1);
                 }
                 break;
        case 3 :
                 prevNode->setNextNode(nextNode);
                 nextNode->setPrevNode(prevNode);
                 if (cursor.getCurrentNode() == node) {
                     cursor.regressNPositions(1);
                 }
                 break;
    }
    delete node;
    return;
}

