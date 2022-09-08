#ifndef QUEUE_FILE
#define QUEUE_FILE

typedef struct queue *Queue;
Queue init_queue();
int insert_in_order(Queue *lst, int val);
int remove_in_order(Queue *lst, int val);
int is_empty(Queue *lst);
int is_full(Queue *lst);
void print_queue(Queue *stck);

#endif