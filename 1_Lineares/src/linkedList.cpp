#include <string>
#include <bits/stdc++.h>
#include "linkedList.hpp"

using namespace linkedList;

Node::Node(std::string valTex, int valInt, Node *nextNode, Node *prevNode) {
    text=valTex;
    number=valInt;
    next=nextNode;
    prev=prevNode;
}

// getters
std::string Node::getValText(void) {
    return text;
}

int Node::getValNum(void) {
    return number;
}

Node *Node::getNextNode(void) {
    return next;
}

Node *Node::getPrevNode(void) {
    return prev;
}

// setters
void Node::setValText(std::string valTex) {
    text = valTex;
}

void Node::setValNum(int valNum) {
    number = valNum;
}

void Node::setNextNode(Node *node) {
    next = node;
}

void Node::setPrevNode(Node *node) {
    prev = node;
}


