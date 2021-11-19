#include <iostream>
#include <string>
#include "stack.hpp"
#include "queue.hpp"


int main(void) {
    // instanciar pilha e fila
    stack::Stack stack = stack::StackFactory::newStack(); 
    queue::Queue *queue = queue::QueueFactory::newQueue(); 

    for (int i = 0; i < 200; i++) { 
        // instanciando e adicionando elementos à pilha (push) 
        linkedList::Node *node = linkedList::NodeFactory::newNode("nome nome nome", i); 
        stack::StackFactory::pushToStack(stack, node); 
    } 

    for (int i = 0; i < 200; i++) { 
        // instanciando e adicionando elementos à fila (enqueue) 
        linkedList::Node *node = linkedList::NodeFactory::newNode("o l a   m u n d o", i); 
        queue::QueueFactory::enqueue(node, queue); 
    } 

    for (int i = 0; i < 200; i++) { 
        // lendo e removendo parte dos elementos da pilha (pop) 
        std::cout << "NODE: {" << stack->getValText() << " ; "; 
        std::cout << stack->getValNum() << "};\n" << std::endl; 
        stack::StackFactory::popFromStack(stack); 
    } 

    for (int i = 0; i < 50; i++) { 
        // lendo e removendo parte dos elementos da fila (dequeue) 
        std::cout << "NODE: {" << queue->head->getValText() << " ; "; 
        std::cout << queue->head->getValNum() << "};\n" << std::endl; 
        queue::QueueFactory::dequeue(queue); 
    } 

    // dealocando estruturas e elementos remanescentes 
    stack::StackFactory::freeStack(stack); 
    queue::QueueFactory::freeQueue(queue); 

    queue::QueueFactory::dequeue(queue); 

    return 0;
}

