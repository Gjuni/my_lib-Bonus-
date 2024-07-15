/** f : data에 적용시킬 함수
 *  del : 필요에 의해 삭제시킬 노드
 */

#include "libft3.h"

void del(void *data) {
    free(data);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)){
    t_list *newList;
    t_list *newNode;
    t_list *nodeNext;

    newList = NULL;
    nodeNext = NULL;

    while(lst) {
        newNode = ft_lstnew(f(lst->data));

        if(!newNode) {
            ft_lstclear(&newNode del);
            return NULL;
        }

        if(!newList){
            newList = newNode;
        }
        else {
            nodeNext->next = newNode;
        }
        nodeNext = newNode;
        lst = lst->next;
    }

    return newList;
}