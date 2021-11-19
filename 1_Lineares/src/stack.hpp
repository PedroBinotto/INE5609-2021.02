#ifndef STACK_H
#define STACK_H

#include "linkedList.hpp"

namespace stack {
    typedef linkedList::Node *Stack;

    class StackFactory {
    public:
        static Stack newStack(void);
        static void popFromStack(Stack &stack);
        static void pushToStack(Stack &stack, linkedList::Node *node);
        static void freeStack(Stack &stack);
    };
}

#endif

// TODO: tornar estático(s)
