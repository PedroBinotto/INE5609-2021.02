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

    /* for (int i = 0; i < 20; i++) { */
    /*     linkedList::Node *node = nodeFactory.instantiateNode("kekw", i); */
    /*     queueService.enqueue(node, queue); */
    /* } */

    /* linkedList::Node *node = nodeFactory.instantiateNode("lmao", 1); */
    /* stackService.pushToStack(stack, node); */
    /* stackService.popFromStack(stack); */

    /* linkedList::Node *node2 = nodeFactory.instantiateNode("lmao", 1); */
    /* stackService.pushToStack(stack, node2); */
    /* stackService.popFromStack(stack); */

    /* linkedList::Node *newde = nodeFactory.instantiateNode("kekw", 2); */
    /* queueService.enqueue(newde, queue); */
    /* queueService.dequeue(queue); */

    /* linkedList::Node *newde2 = nodeFactory.instantiateNode("kekw", 2); */
    /* queueService.enqueue(newde2, queue); */
    /* queueService.dequeue(queue); */

    stackService.freeStack(stack);
    /* queueService.freeQueue(queue); */
    return 0;
}

