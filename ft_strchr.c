

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == (char)c)
			return ((char *)&s[counter]);
		counter++;
	}
	if (s[counter] == (char)c)
		return ((char *)&s[counter]);
	return (NULL);
}
