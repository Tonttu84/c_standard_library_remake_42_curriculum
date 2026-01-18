

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cur;
	t_list	*last;

	cur = lst;
	last = NULL;
	while (cur != NULL)
	{
		last = cur;
		cur = cur->next;
	}
	return (last);
}
