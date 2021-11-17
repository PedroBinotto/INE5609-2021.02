#ifndef QUEUE_H
#define QUEUE_H

#include "linkedList.hpp"

namespace queue {
    typedef struct Queue {
        linkedList::Node *head;
        linkedList::Node *tail;
    } Queue;

    class QueueService {
    public:
        Queue *instantiateQueue(void);
        void enqueue(std::string valTex, int valNum, queue::Queue *&queue);
        void dequeue(Queue *&queue);
        void freeQueue(Queue *&queue);
    };
}

#endif

