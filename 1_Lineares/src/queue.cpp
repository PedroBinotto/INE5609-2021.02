#include <string>
#include <iostream>
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
    if (queue->head == NULL) {
        queue->head = node;
    }
    queue->tail = node;
}

void QueueService::dequeue(Queue *&queue) {
    linkedList::Node *tmp = queue->head;
    if (tmp != NULL) {
        queue->head = tmp->getPrevNode();
    }
    queue->head->setNextNode(NULL);
    delete tmp;
}

void QueueService::freeQueue(Queue *&queue) {
    linkedList::NodeFactory::freeList(queue->tail);
    delete queue;
}

