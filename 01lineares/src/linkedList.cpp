#include <string>
#include "linkedList.hpp"

using namespace linkedList;

Node::Node(std::string valTex, int valNum, Node *nextNode, Node *prevNode) {
    text=valTex;
    number=valNum;
    next=nextNode;
    prev=prevNode;
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

Node *Node::getPrevNode(void) {
    return prev;
}

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

Node *NodeFactory::newNode(
    std::string valTex,
    int valNum) {
    return new Node(valTex, valNum, NULL, NULL);
}


void NodeFactory::freeList(Node *list) {
    if (list != NULL) {
        freeList(list->getNextNode());
        delete list;
        list = NULL;
    }
}

