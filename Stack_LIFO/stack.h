#ifndef STACK_FILE
#define STACK_FILE

typedef struct stack* Stack;
Stack init_stack();
int push(Stack* stck, int val);
int pop(Stack* stck);
int is_empty(Stack* stck);
int peek(Stack* stck);
void print_stack(Stack* stck);

#endif