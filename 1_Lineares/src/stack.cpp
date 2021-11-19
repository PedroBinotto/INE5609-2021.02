#include <string>
#include "stack.hpp"

using namespace stack;

Stack StackService::instantiateStack(void) {
    return NULL;
}

void StackService::popFromStack(Stack &stack) {
    linkedList::Node *tmp = stack;
    stack = stack->getNextNode();
    delete tmp;
}

void StackService::pushToStack(Stack &stack, linkedList::Node *node) {
    node->setNextNode(stack);
    stack = node;
}

void StackService::freeStack(Stack &stack) {
    linkedList::NodeFactory::freeList(stack);
    delete stack;
}

