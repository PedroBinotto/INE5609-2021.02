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

    //pushToStack(Stack stack, asdlas);
    // Queue instanceQueue(void) {}
};

int main(void) {
    Demo instanciador = Demo();
    Stack stack = instanciador.instanceStack();

    instanciador.pushToStack(stack, "head", 1);
    std::cout << stack->getValText() << std::endl;
    return 0;
}

