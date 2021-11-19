#include <string>
#include <iostream>
#include "queue.hpp"

using namespace queue;

Queue *QueueFactory::newQueue(void) {
    return new Queue;
}

void QueueFactory::enqueue(linkedList::Node *node, Queue *&queue) {
    node->setNextNode(queue->tail);
    if (queue->tail != NULL) {
        queue->tail->setPrevNode(node);
    }
    if (queue->head == NULL) {
        queue->head = node;
    }
    queue->tail = node;
}

void QueueFactory::dequeue(Queue *&queue) {
    if (queue != NULL) {
        linkedList::Node *tmp = queue->head;
        if (tmp != NULL) {
            queue->head = tmp->getPrevNode();
        } else {
            std::cout << "QUEUE EMPTY" << std::endl;
        }
        queue->head->setNextNode(NULL);
        delete tmp;
    }
}

void QueueFactory::freeQueue(Queue *&queue) {
    linkedList::NodeFactory::freeList(queue->tail);
    delete queue;
    queue = NULL;
}

