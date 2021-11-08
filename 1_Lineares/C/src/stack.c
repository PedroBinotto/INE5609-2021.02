#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct node node_t;
/* typedef struct node_t *stack; */     // TODO: implementar pilhas distintas

struct node {
    int value;
    node_t *next;
};

node_t *push(int value);
bool pop(void);
void generateStack(void);
void demoStack(void);

node_t *top = NULL;

int main(void) {
    generateStack();
    demoStack();
    return 0;
}

bool pop(void) {
    if (top == NULL) {
        printf("[pop]: PILHA VAZIA!\n");
        return false;
    }

    node_t *tmp = top;
    top = tmp->next;
    free(tmp);
    return true;
}

node_t *push(int value) {
    node_t *newNode = (node_t *) malloc(sizeof(node_t));
    newNode->value = value;
    newNode->next = top;
    top = newNode;
    return top;
}

void generateStack(void) {
    for (int i = 0; i < 20; i++) {
        push(i);
    }
}

void demoStack(void) {
    for (int i = 0; i < 20; i++) {
        printf("%d\n", top->value);
        pop();
    }
    push(1);
    push(12);
    push(13);

    printf("%d\n", top->value);
    pop();
    printf("%d\n", top->value);
    pop();
    printf("%d\n", top->value);
    pop();
    pop();      // tentativa de POP sem elementos na pilha
}

