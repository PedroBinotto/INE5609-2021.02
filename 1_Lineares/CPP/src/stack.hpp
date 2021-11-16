#ifndef STACK_H
#define STACK_H

#include <string>

class Node {
public:
    Node(std::string valTex="", int valInt=0, Node *nextNode=NULL);

    std::string getValText(void);
    int getValNum(void);
    Node *getNextNode(void);

    void setValText(std::string valTex);
    void setValNum(int valNum);
    void setNextNode(Node *nextNode);
private:
    std::string text;
    int number;
    Node *next;
};

typedef Node *Stack;

void pop(Stack &stack);
void push(Stack &stack, std::string valTex, int valNum);
void crawler(Stack &stack);

#endif
