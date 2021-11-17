#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

namespace linkedList {
    class Node {
    public:
        Node(
            std::string valTex="",
            int valNum=0,
            Node *nextNode=NULL,
            Node *prevNode=NULL);

        std::string getValText(void);
        int getValNum(void);
        Node *getNextNode(void);
        Node *getPrevNode(void);

        void setValText(std::string valTex);
        void setValNum(int valNum);
        void setNextNode(Node *nextNode);
        void setPrevNode(Node *nextNode);
    private:
        std::string text;
        int number;
        Node *next;
        Node *prev;
    };

    class NodeFactory {
    public:
        Node *instantiateNode(
            std::string valTex="",
            int valNum=0);
    };
}

#endif
