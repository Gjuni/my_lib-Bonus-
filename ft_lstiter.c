/** f : lst의 data에 f를 적용하는 것*/

#include "libft3.h"

void ft_lstiter(t_list *lst, void (*f)(void *)){
    t_list *current;
    t_list *next;
    current = *lst;

    if(!lst)
        return;

    while(current) {
        next = current->next;
        f(current->data) // f는 함수로 작용 즉 (void *)에는 current->data가 직접 들어가야함.
        current = next;
    }
}