#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main() {
    Stack stck = init_stack();

    push(&stck, 10);
    push(&stck, 2);
    push(&stck, 30);
    push(&stck, 50);
    print_stack(&stck);
    int peek_val = peek(&stck);
    printf("%d\n", peek_val);
    print_stack(&stck);
    int val = pop(&stck);
    printf("%d\n", val);
    print_stack(&stck);
    val = pop(&stck);
    printf("%d\n", val);
    val = pop(&stck);
    printf("%d\n", val);
    print_stack(&stck);
    val = pop(&stck);
    val = pop(&stck);
    return 0;
}