#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
    t_list *new = NULL;

    if (*head == NULL || head == NULL)
        return;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    }
    else {
        new = (*head)->next;
        free(*head);
        *head = new;
    }
}
