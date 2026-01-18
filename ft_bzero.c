
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	counter;

	counter = 0;
	ptr = (char *)s;
	while (n--)
	{
		ptr[counter++] = '\0';
	}
}
