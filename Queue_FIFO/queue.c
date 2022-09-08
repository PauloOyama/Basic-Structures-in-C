
#include "queue.h"

#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 10

struct queue {
    int lst[QUEUE_SIZE];
    int end;
};

Queue init_queue() {
    Queue lst = (Queue)malloc(sizeof(Queue));
    if (lst != NULL)
        lst->end = 0;
    return lst;
}

// Insert [val] int in non-increasing order in [lst] Queue.
// if the operation is sucessfull return 1, otherwise, return 0
int insert_in_order(Queue *lst, int val) {
    if (lst == NULL || is_full(lst))
        return 0;

    int last_pos = (*lst)->lst[((*lst)->end - 1)];

    if (is_empty(lst) || val >= last_pos) {
        (*lst)->lst[(*lst)->end] = val;
        (*lst)->end++;
        return 1;
    }

    Queue aux = *lst;
    int index = 0;
    for (index = 0; index <= aux->end; index++) {
        if (val < aux->lst[index])
            break;
    }
    int flag = 0;
    int j = aux->end;

    while ((j - 1) >= index) {
        aux->lst[j] = aux->lst[j - 1];
        j--;
    }

    aux->lst[index] = val;
    aux->end++;

    return 1;
}

// Remove [val] int in non-increasing order in [lst] Queue.
// if the operation is sucessfull return 1, otherwise, return 0
int remove_in_order(Queue *lst, int val) {
    if (lst == NULL || is_empty(lst))
        return 0;

    int last_pos = (*lst)->lst[((*lst)->end - 1)];

    if (val == last_pos) {
        (*lst)->end--;
        return 1;
    }

    Queue aux = (*lst);
    int index = 0;
    for (index = 0; index <= aux->end; index++) {
        if (val <= aux->lst[index])
            break;
    }

    if (val < aux->lst[index]) {
        printf("Error: Value %d not founded in lst\n", val);
        return 0;
    }

    for (; index < aux->end; index++) {
        aux->lst[index] = aux->lst[index + 1];
    }

    aux->end--;
    return 1;
}

void print_queue(Queue *stck) {
    for (int i = 0; i < (*stck)->end; i++)
        printf("%d\n", (*stck)->lst[i]);
}

int is_empty(Queue *lst) {
    if ((*lst)->end == 0)
        return 1;
    else
        return 0;
}

int is_full(Queue *lst) {
    if ((*lst)->end == QUEUE_SIZE)
        return 1;
    else
        return 0;
}