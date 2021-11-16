#include <iostream>
#include <string>

#include "stack.hpp"

class Demo {
public:
    Stack instanceStack(void){
        return NULL;
    }

    void popFromStack(Stack &stack) {
        Node *tmp = stack;
        stack = stack->getNextNode();
        delete tmp;
    }

    void pushToStack(Stack &stack, std::string valTex = "", int valNum = 0) {
        Node *newNode = new Node(valTex, valNum, stack);
        stack = newNode;
    }

    void freeStack(const Stack &stack) {
        if (stack->getNextNode() != NULL) {
            this->freeStack(stack->getNextNode());
        }
        delete stack;
    }
};

int main(void) {
    Demo instanciador = Demo();

    Stack stack = instanciador.instanceStack();

    instanciador.pushToStack(stack, "1", 1);
    instanciador.pushToStack(stack, "2", 2);
    instanciador.pushToStack(stack, "3", 3);
    instanciador.pushToStack(stack, "4", 4);

    instanciador.popFromStack(stack);

    instanciador.freeStack(stack);

    return 0;
}

