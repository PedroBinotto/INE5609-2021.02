#include <iostream>
#include <string>

#include "stack.hpp"
#include "queue.hpp"

class Demo {
public:
    stack::Stack instantiateStack(void) {
        return NULL;
    }

    void popFromStack(stack::Stack &stack) {
        linkedList::Node *tmp = stack;
        stack = stack->getNextNode();
        delete tmp;
    }

    void pushToStack(stack::Stack &stack, std::string valTex = "", int valNum = 0) {
        linkedList::Node *newNode = new linkedList::Node(valTex, valNum, stack);
        stack = newNode;
    }

    void freeStack(const stack::Stack &stack) {
        if (stack->getNextNode() != NULL) {
            this->freeStack(stack->getNextNode());
        }
        delete stack;
    }

    // queue::Queue *instanceQueue()
    // void enqueue()
    // void dequeue()
    // void freeQueue
};

int main(void) {
    Demo instanciador = Demo();

    stack::Stack stack = instanciador.instantiateStack();

    instanciador.pushToStack(stack, "1", 1);
    instanciador.pushToStack(stack, "2", 2);
    instanciador.pushToStack(stack, "3", 3);
    instanciador.pushToStack(stack, "4", 4);

    instanciador.popFromStack(stack);

    instanciador.freeStack(stack);

    Queue *q = instantiateQueue();
    enqueue("lol", 1, q);

    std::cout << q->tail->getValText() << std::endl;

    return 0;
}

