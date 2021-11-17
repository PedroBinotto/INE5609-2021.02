#include <string>
#include <bits/stdc++.h>
#include "queue.hpp"

using namespace queue;

Queue *QueueService::instantiateQueue(void) {
    return new Queue;
}

void QueueService::enqueue(std::string valTex, int valNum, Queue *&queue) {
    linkedList::Node *newNode = new linkedList::Node(valTex, valNum, queue->tail);
    if (queue->tail != NULL) {
        queue->tail->setPrevNode(newNode);
    }
    queue->tail = newNode;
    if (queue->head == NULL) {
        queue->head = newNode;
    }
}

void QueueService::dequeue(Queue *&queue) {
    linkedList::Node *tmp = queue->head;
    if (tmp != NULL) {
        queue->head = tmp->getPrevNode();
    }
    delete tmp;
}

void QueueService::freeQueue(Queue *&queue) {
    while (queue->head != NULL) {
        this->dequeue(queue);
    }
    delete queue;
}

