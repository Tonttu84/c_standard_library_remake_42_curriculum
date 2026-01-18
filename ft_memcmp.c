

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a1;
	const unsigned char	*b2;

	a1 = (const unsigned char *)s1;
	b2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*a1 != *b2)
			return (*a1 - *b2);
		a1++;
		b2++;
	}
	return (0);
}
