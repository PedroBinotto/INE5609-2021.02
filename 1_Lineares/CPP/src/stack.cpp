#include <string>
#include <bits/stdc++.h>
#include "stack.hpp"

Node::Node(std::string valTex, int valInt, Node *nextNode) {
    text=valTex;
    number=valInt;
    next=nextNode;
}

std::string Node::getValText(void) {
    return text;
}

int Node::getValNum(void) {
    return number;
}

Node *Node::getNextNode(void) {
    return next;
}

void pop(Stack &stack) {
    // desempilha
    Node *tmp = stack;
    stack = stack->getNextNode();
    delete tmp;
}

void push(Stack &stack, std::string valTex = "", int valNum = 0) {
    // empilha
    Node *newNode = new Node(valTex, valNum, stack);
    stack = newNode;
}

void crawler(Stack &stack) {
    Node *tmp = stack;
    while(tmp->getNextNode() != NULL) {
        std::cout << tmp->getValNum() << std::endl;
        tmp = tmp->getNextNode();
    }
}

/* int main(void) { */
/*     Stack stack = NULL; */
/*     for (int i = 0; i < 20; i++) { */
/*         push(stack, "a", i); */
/*     } */
/*     crawler(stack); */
/*     return 0; */
/* } */

