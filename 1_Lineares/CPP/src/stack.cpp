#include <string>
#include <bits/stdc++.h>
using namespace std;

class Node {
    // nodos da lista encadeada
public:
    string texto;
    int numero;
    Node *next; // endereço do proximo nodo

    Node(string texto = "", int numero = 0, Node *next = NULL):
        texto(texto), numero(numero), next(next) {}
};

// TODO: encapsular em classe

typedef Node *Stack;

void pop(void);
void push(void);

int main(void) {
    return 0;
}

void pop(Stack &stack) {
    // desempilha
    Node *tmp = stack;
    stack = stack->next;
    delete tmp;
}

void push(Stack &stack, string valTex = "", int valNum = 0) {
    // empilha
    Node *newNode = new Node(valTex, valNum, stack);
    stack = newNode;
}

