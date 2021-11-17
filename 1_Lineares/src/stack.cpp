#include <string>
#include <bits/stdc++.h>
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

void StackService::pushToStack(Stack &stack, std::string valTex, int valNum) {
    linkedList::Node *newNode = new linkedList::Node(valTex, valNum, stack);
    stack = newNode;
}

void StackService::freeStack(const Stack &stack) {
    if (stack->getNextNode() != NULL) {
        this->freeStack(stack->getNextNode());
    }
    delete stack;
}

