#include <iostream>
#include <string>
#include "stack.hpp"
#include "queue.hpp"

int main(void) {
    stack::Stack stack = stack::StackFactory::newStack();
    queue::Queue *queue = queue::QueueFactory::newQueue();

    for (int i = 0; i < 20; i++) {
        linkedList::Node *node = linkedList::NodeFactory::newNode("lmao", i);
        stack::StackFactory::pushToStack(stack, node);
    }

    for (int i = 0; i < 20; i++) {
        linkedList::Node *node = linkedList::NodeFactory::newNode("kekw", i);
        queue::QueueFactory::enqueue(node, queue);
    }

    linkedList::Node *node = linkedList::NodeFactory::newNode("lmao", 1);
    stack::StackFactory::pushToStack(stack, node);
    stack::StackFactory::popFromStack(stack);

    linkedList::Node *node2 = linkedList::NodeFactory::newNode("lmao", 1);
    stack::StackFactory::pushToStack(stack, node2);
    stack::StackFactory::popFromStack(stack);

    linkedList::Node *newde = linkedList::NodeFactory::newNode("kekw", 2);
    queue::QueueFactory::enqueue(newde, queue);
    queue::QueueFactory::dequeue(queue);

    linkedList::Node *newde2 = linkedList::NodeFactory::newNode("kekw", 2);
    queue::QueueFactory::enqueue(newde2, queue);
    queue::QueueFactory::dequeue(queue);

    stack::StackFactory::freeStack(stack);
    queue::QueueFactory::freeQueue(queue);
    queue::QueueFactory::dequeue(queue);
    return 0;
}

