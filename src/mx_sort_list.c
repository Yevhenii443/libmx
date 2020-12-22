#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    t_list *new = lst;
    void *qwe;

    for (int i = mx_list_size(lst) - 1; i > 0; i--) {
        new = lst;
        for (int j = 0; j < i; j++) {
            if (cmp(new->data, new->next->data)) {
                qwe = new->next->data;
                new->next->data = new->data;
                new->data = qwe;
            }
            new = new->next;
        }
    }
    return lst;
}
