/** 포인터 lst의 data를 del()함수를 통해 삭제 후 free 함수를 통해 lst 할당을 해제하는 함수 
 *  lst : free할 노드
*/

#include "libft3.h"

void del(void *data) {
    free((char *)data);
}

void ft_lstdelone(t_list *lst, void (*del)(void *)) {
    if(!lst)
        return;

    del(lst->data);
    free(lst);
}