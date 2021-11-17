#include <iostream>
#include <string>

#include "stack.hpp"
#include "queue.hpp"

int main(void) {
    queue::QueueService qservice = queue::QueueService();
    stack::StackService stackService = stack::StackService();

    stack::Stack stack = stackService.instantiateStack();
    queue::Queue *q = qservice.instantiateQueue();

    stackService.pushToStack(stack, "1", 1);
    stackService.pushToStack(stack, "2", 2);
    stackService.pushToStack(stack, "3", 3);
    stackService.pushToStack(stack, "4", 4);
    stackService.popFromStack(stack);
    stackService.freeStack(stack);

    qservice.enqueue("lol", 1, q);
    qservice.enqueue("lol", 2, q);
    qservice.enqueue("lol", 3, q);
    qservice.enqueue("lol", 4, q);

    std::cout << q->tail->getValNum() << std::endl;
    std::cout << q->head->getValNum() << std::endl;
    std::cout << q->head->getValNum() << std::endl;

     qservice.freeQueue(q);

    return 0;
}

