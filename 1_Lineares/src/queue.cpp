#include <string>
#include <bits/stdc++.h>
#include "queue.hpp"

using namespace queue;

Queue *QueueService::instantiateQueue(void) {
    return new Queue;
}

void QueueService::enqueue(linkedList::Node *node, Queue *&queue) {
    node->setNextNode(queue->tail);
    if (queue->tail != NULL) {
        queue->tail->setPrevNode(node);
    }
    queue->tail = node;
    if (queue->head == NULL) {
        queue->head = node;
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

