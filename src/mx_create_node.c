#include "../inc/libmx.h"

t_list *mx_create_node(void *data) {
    t_list *node = NULL;

    if (data == NULL)
        return NULL;
    else {
        node = malloc(sizeof(t_list));
        node->data = data;
        node->next = NULL;
    }
    return node;
}
