#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
    t_list *new = NULL;
    int count = 0;

    if (list == NULL)
        return count;
    else {
        new = list;
        while (new != NULL) {
            new = new->next;
            count++;
        }
    }
    return count;
}
