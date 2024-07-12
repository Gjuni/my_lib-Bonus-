/** last node of the list 
 *  *lst : 첫 노드`
*/

#include "libft3.h"

t_list *ft_lstlast(t_list *lst) {
    if(!lst)
        return;

    while(lst->next != NULL){
        lst = lst->next;
    }
    return lst;
}