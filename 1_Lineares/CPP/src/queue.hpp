#ifndef QUEUE_H
#define QUEUE_H

#include "linkedList.hpp"

typedef struct Queue {
    linkedList::Node *head;
    linkedList::Node *tail;
} Queue;

#endif
