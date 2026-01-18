

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (*lst == NULL)
		return ;
	next_node = (*lst)->next;
	ft_lstdelone(*lst, del);
	ft_lstclear(&next_node, del);
	*lst = NULL;
}
