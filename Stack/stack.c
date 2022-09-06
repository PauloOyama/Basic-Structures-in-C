#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

struct stack {
    int value;
    struct stack* next;
};

Stack init_stack() {
    return NULL;
}

int is_empty(Stack* stck) {
    if (stck == NULL)
        return 1;
    else
        return 0;
}

int push(Stack* stck, int val) {
    Stack new = (Stack)malloc(sizeof(Stack));
    // Should verify if the stck exists or
    if (new == NULL)
        return 0;

    new->value = val;
    new->next = *stck;
    *stck = new;

    return 1;
}

int pop(Stack* stck) {
    int value;

    if (is_empty(stck)) {
        printf("Error: Empty Stack");
        exit(-1);
    }

    Stack aux = *stck;
    value = aux->value;
    *stck = aux->next;
    free(aux);

    return value;
}

int peek(Stack* stck) {
    if (is_empty(stck)) {
        printf("Error: Empty Stack");
        exit(-1);
    }

    return (*stck)->value;
}

void print_stack(Stack* stck) {
    if (is_empty(stck)) {
        printf("Error: Empty Stack");
        exit(-1);
    }

    printf("\n_______________\n");

    Stack aux = *stck;
    while (aux != NULL) {
        printf("|     %d     |\n", aux->value);
        printf("_______________\n");

        aux = aux->next;
    }
}