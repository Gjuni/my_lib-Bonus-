#ifndef LIBFT3_H
#define LIBFT3_H

#include <stdlib.h> // malloc

typedef struct s_list
{
    void *data;
    struct s_list *next;
}t_list;

t_list *ft_lstnew(void *data);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif