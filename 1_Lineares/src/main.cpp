#include <iostream>
#include <string>
#include "stack.hpp"
#include "queue.hpp"

int main(void) {
    stack::Stack stack = stack::StackService::newStack();
    queue::Queue *queue = queue::QueueService::newQueue();

    for (int i = 0; i < 20; i++) {
        linkedList::Node *node = linkedList::NodeFactory::newNode("lmao", i);
        stack::StackService::pushToStack(stack, node);
    }

    for (int i = 0; i < 20; i++) {
        linkedList::Node *node = linkedList::NodeFactory::newNode("kekw", i);
        queue::QueueService::enqueue(node, queue);
    }

    linkedList::Node *node = linkedList::NodeFactory::newNode("lmao", 1);
    stack::StackService::pushToStack(stack, node);
    stack::StackService::popFromStack(stack);

    linkedList::Node *node2 = linkedList::NodeFactory::newNode("lmao", 1);
    stack::StackService::pushToStack(stack, node2);
    stack::StackService::popFromStack(stack);

    linkedList::Node *newde = linkedList::NodeFactory::newNode("kekw", 2);
    queue::QueueService::enqueue(newde, queue);
    queue::QueueService::dequeue(queue);

    linkedList::Node *newde2 = linkedList::NodeFactory::newNode("kekw", 2);
    queue::QueueService::enqueue(newde2, queue);
    queue::QueueService::dequeue(queue);

    stack::StackService::freeStack(stack);
    queue::QueueService::freeQueue(queue);
    queue::QueueService::dequeue(queue);
    return 0;
}

