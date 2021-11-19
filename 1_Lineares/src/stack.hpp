#ifndef STACK_H
#define STACK_H

#include "linkedList.hpp"

namespace stack {
    typedef linkedList::Node *Stack;

    class StackService {
    public:
        Stack instantiateStack(void);
        void popFromStack(Stack &stack);
        void pushToStack(Stack &stack, linkedList::Node *node);
        void freeStack(Stack &stack);
    };
}

#endif

// TODO: tornar estático(s)
