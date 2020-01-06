#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
    t_list *tmp = NULL;

    if (*head == NULL)
        exit(-1);
    tmp = (*head);
    (*head) = (*head)->next;
    free(tmp);
}

