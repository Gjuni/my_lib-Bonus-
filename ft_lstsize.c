/** 리스트 길이 구하는 함수
 *  *lst는 리스트의 첫 노드
 */

#include "libft3.h"

int ft_lstsize(t_list *lst) {
    int idx;
    idx = 0;

    if(lst == NULL)
        return 0;
    while(lst != NULL) {
        // *lst++;
        lst = lst->next; // 연결리스트는 ++연산자보다는 next로 사용함
        idx++;
    }

    return idx;
}