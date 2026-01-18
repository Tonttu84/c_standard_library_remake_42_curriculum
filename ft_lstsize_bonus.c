

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		count;

	count = 0;
	cur = lst;
	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return (count);
}
