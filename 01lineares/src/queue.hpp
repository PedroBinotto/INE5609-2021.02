#ifndef QUEUE_H
#define QUEUE_H

#include "linkedList.hpp"

namespace queue {
    typedef struct Queue {
        linkedList::Node *head;
        linkedList::Node *tail;
    } Queue;

    class QueueFactory {
    public:
        static Queue *newQueue(void);
        static void enqueue(linkedList::Node *node, queue::Queue *&queue);
        static bool dequeue(Queue *&queue);
        static void freeQueue(Queue *&queue);
    };
}

#endif

