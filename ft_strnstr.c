

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	counter;

	counter = 0;
	while (len > counter)
	{
		if (little[counter] == 0)
			return ((char *)big);
		if (big[counter] == 0)
			return (NULL);
		if (big[counter] != little[counter])
		{
			big++;
			len--;
			counter = 0;
			continue ;
		}
		counter++;
	}
	if (little[counter] == 0)
		return ((char *)big);
	return (NULL);
}
