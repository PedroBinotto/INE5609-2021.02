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

