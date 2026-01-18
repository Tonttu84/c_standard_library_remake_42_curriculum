
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				counter;

	ptr = (unsigned char *)s;
	counter = 0;
	while (n--)
	{
		ptr[counter] = (unsigned char)c;
		counter++;
	}
	return (s);
}
