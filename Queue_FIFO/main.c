#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main() {
    Queue lst = init_queue();

    for (int i = 10; i > 0; i--) {
        insert_in_order(&lst, i);
    }
    print_queue(&lst);

    for (int i = 3; i > 0; i--) {
        remove_in_order(&lst, i * 2);
    }
    print_queue(&lst);

    return 0;
}
