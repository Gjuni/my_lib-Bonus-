/** t_list 연결 리스트 lst의 맨 앞에 new라는 t_list 노드를 추가하는 함수 
 *  **lst : t_list 포인터의 주소를 가르키는 변수
 *  * new : 리스트에 추가할 노드의 주소
 */

/** *lst  : 리스트의 현재(첫번째노트) 헤드 노드를 가르킴
 *  **lst : *lst를 가르키는 포인터 
 */

#include "libft3.h"

void ft_lstadd_front(t_list **lst, t_list *new) {
    if(!new)
        return;
    new->next = *lst; // 새로운 노드의 next포인터가 현재의 헤드 노드를 가르키도록 함
    *lst = new; // 해드 포인터가 새로운 노드를 가리키도록 설정
    // new가 header(lst)를 가르키고 기존에 head가 가르키는 노드에서 new로 변경시키면 new가 맨 앞에 오게 됨
}