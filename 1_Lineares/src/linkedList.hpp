#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

namespace linkedList {
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
}

#endif
