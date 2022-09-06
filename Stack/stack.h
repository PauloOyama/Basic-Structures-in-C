#ifndef HEADER_FILE
#define HEADER_FILE

typedef struct stack *Stack;
Stack init_stack();
int push(Stack *stck, int val);
int pop(Stack *stck);
int is_empty(Stack *stck);
// int *peek();
// int *is_full();
// int *print_stack();

#endif