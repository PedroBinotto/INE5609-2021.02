#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value=0, Node* nextNode=NULL) {
        data = value;
        next = nextNode;
    }
};

typedef Node* List;

Node *createList(void);
void crawl(Node *head);
void freeList(Node *node);
bool addToTail(List list, int value);
bool addToHead(List &list, int value);
bool removeByValue(List &list, int val);
bool removeFromHead(List &list);
bool removeFromTail(List &list);

int main(void)
{
    List list = createList();
    crawl(list);
    cout << "==========\n";
    addToTail(list, 420);
    addToHead(list, 40);
    removeByValue(list, 18);
    crawl(list);

    removeFromHead(list);
    removeFromTail(list);
    cout << "==========\n";
    crawl(list);

    freeList(list);

    return 0;
}

void crawl(Node *node) {
    cout << "Node value: " << node->data << "\n";
    if (node->next != NULL) {
        crawl(node->next);
    }
}

void freeList(Node *node) {
    Node *tmp = node->next != NULL ? node->next : NULL;
    cout << "NODE " << node->data << " DELETED\n";
    delete node;
    if (tmp != NULL) {
        freeList(tmp);
    }
}

Node *createList(void) {
    Node *prev = new Node(0);
    Node *head = prev;
    for (int i = 1; i < 20; i++) {
        Node *newNode = new Node(i);
        prev->next = newNode;
        prev = newNode;
    }
    return head;
}

bool addToTail(List list, int value) {
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = new Node(value);
    return true;
}

bool addToHead(List &list, int value) {
    Node *newHead = new Node(value, list);
    list = newHead;
    return true;
}

bool removeFromTail(List &list) {
    Node *currentNode = list;
    Node *previousNode = NULL;
    while(currentNode->next != NULL) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
    previousNode->next = NULL;
    delete currentNode;
    return true;
}


bool removeFromHead(List &list) {
   Node *tmp = list;
   list = list->next;
   delete tmp;
   return true;
}

bool removeByValue(List &list, int val) {
    Node *currentNode = list;
    Node *previousNode = NULL;
    while(true) {
        if (currentNode->data == val) {
            previousNode->next = currentNode->next;
            delete currentNode;
            return true;
        }
        if (currentNode->next != NULL) {
            previousNode = currentNode;
            currentNode = currentNode->next;
        }
    }
    return false;
}

