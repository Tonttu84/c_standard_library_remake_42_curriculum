

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	cur = *lst;
	last = NULL;
	while (cur != NULL)
	{
		last = cur;
		cur = cur->next;
	}
	last->next = new;
}
