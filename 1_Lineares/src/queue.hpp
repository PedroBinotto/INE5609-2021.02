#ifndef QUEUE_H
#define QUEUE_H

#include "linkedList.hpp"

typedef struct Queue {
    linkedList::Node *head;
    linkedList::Node *tail;
} Queue;

Queue *instantiateQueue(void);
void enqueue(std::string valTex, int valNum, Queue *&queue);

#endif

/* void dequeue(Queue *&queue); */
/* void freeQueue(Queue *queue); */

