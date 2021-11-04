#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

struct node {
    int value;
    node_t *next;
};

int main(void) {
    node_t n1;
    n1.value = 13;
    n1.next = NULL;
    printf("%d\n", n1.value);

    return 0;
}

