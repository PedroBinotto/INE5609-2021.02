#include <bits/stdc++.h>
#include <string>
#include "queue.hpp"

/* void dequeue(Queue *&queue); */
/* void freeQueue(Queue *queue); */

Queue *instantiateQueue(void) {
    Queue *queue = new Queue;
    return queue;
}

void enqueue(std::string valTex, int valNum, Queue *&queue) {
    linkedList::Node *newNode = new linkedList::Node(valTex, valNum);

    newNode->setNextNode(queue->tail);

    queue->tail = newNode;
    if (queue->head == NULL) {
        queue->head = newNode;
    }
}

