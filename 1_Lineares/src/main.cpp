#include <iostream>
#include <string>

#include "stack.hpp"
#include "queue.hpp"

int main(void) {
    linkedList::NodeFactory nodeFactory = linkedList::NodeFactory();

    queue::QueueService queueService = queue::QueueService();
    stack::StackService stackService = stack::StackService();

    stack::Stack stack = stackService.instantiateStack();
    queue::Queue *queue = queueService.instantiateQueue();

    for (int i = 0; i < 20; i++) {
        linkedList::Node *node = nodeFactory.instantiateNode("lmao", i);
        stackService.pushToStack(stack, node);
    }

    for (int i = 0; i < 20; i++) {
        linkedList::Node *node = nodeFactory.instantiateNode("kekw", i);
        queueService.enqueue(node, queue);
    }

    std::cout << queue->tail->getValNum() << std::endl;
    std::cout << queue->head->getValNum() << std::endl;
    std::cout << queue->head->getValNum() << std::endl;

    stackService.freeStack(stack);
    queueService.freeQueue(queue);
    return 0;
}

