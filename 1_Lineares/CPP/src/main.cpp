#include <iostream>
#include <string>
#include "stack.hpp"

int main(void) {
    Stack stack = NULL;
    for (int i = 0; i < 20; i++) {
        push(stack, "aa", i);
    }

    return 0;
}

