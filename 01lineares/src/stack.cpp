#include <string>
#include <iostream>
#include "stack.hpp"

using namespace stack;

Stack StackFactory::newStack(void) {
    return (Stack) NULL;
}

bool StackFactory::popFromStack(Stack &stack) {
    if (stack != NULL) {
        linkedList::Node *tmp = stack;
        stack = stack->getNextNode() != NULL
            ? stack->getNextNode()
            : NULL;
        delete tmp;
        return true;
    } else {
        return false;
    }
}

void StackFactory::pushToStack(Stack &stack, linkedList::Node *node) {
    node->setNextNode(stack);
    stack = node;
}

void StackFactory::freeStack(Stack &stack) {
    linkedList::NodeFactory::freeList(stack);
    stack = NULL;
}

