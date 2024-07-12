#include "libft3.h"

t_list *ft_lstnew(void *data) {
    t_list *node = (t_list *)malloc(sizeof(t_list));
    node->data = data;
    node->next = NULL;
    return node;
}