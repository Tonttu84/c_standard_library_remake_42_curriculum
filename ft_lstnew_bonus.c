

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(1 * sizeof(t_list));
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
