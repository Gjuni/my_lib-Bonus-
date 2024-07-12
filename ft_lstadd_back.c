/** 맨 끝에 추가 시키는 기능
 *  **lst : first link of a list
 *  new : 추가 노드 주소
 */
// 주의 사항 : lst는 첫번째 노드를 가르킨다. 하지만 *lst -> next를 해버리는 순간 첫 노드의 참조하는 값이 사라지게 된다. 그래서 임시 temp를 선언 후 사용하는 것이 좋다
#include "libft3.h"

void ft_lstadd_back(t_list **lst, t_list *new) {
    t_list *temp;
    temp = *lst;
    if(!new)
        return;

    if(!*lst) {
        *lst = new;
        return;
    }
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    new->next = NULL;
    temp->next = new;
}