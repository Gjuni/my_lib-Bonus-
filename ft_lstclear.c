/** 모든 노드 free
 *  **lst : *lst를 가르키는 포인터
*/

// 여기서 문제점이 free(*lst)를 하게 된다면 next도 덩달아 free가 되므로 임시로 저장할 공간을 마련해주어야한다.

#include "libft3.h"

void del(void *data) {
    free(data)
}

void ft_lstclear(t_list **lst, void (*del)(void *)) {
    if(!*lst || !lst)
        return;

    t_list *now; 
    t_list *current;
    current = *lst;

    while((current) != NULL) {
        now = current->next;
        del(current->data);
        free(current);
        current = now;
    }
    *lst = NULL;
}