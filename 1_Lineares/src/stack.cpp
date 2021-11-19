#include <string>
#include <iostream>
#include "stack.hpp"

using namespace stack;

Stack StackService::newStack(void) {
    return (Stack) NULL;
}

void StackService::popFromStack(Stack &stack) {
    if (stack != NULL) {
        linkedList::Node *tmp = stack;
        stack = stack->getNextNode();
        delete tmp;
    } else {
        std::cout << "STACK EMPTY" << std::endl;
    }
}

void StackService::pushToStack(Stack &stack, linkedList::Node *node) {
    node->setNextNode(stack);
    stack = node;
}

void StackService::freeStack(Stack &stack) {
    linkedList::NodeFactory::freeList(stack);
}
