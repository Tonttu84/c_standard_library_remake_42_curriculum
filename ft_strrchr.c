

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	counter;
	int	marker;

	counter = 0;
	marker = -1;
	while (s[counter])
	{
		if ((unsigned char)s[counter] == (unsigned char)c)
			marker = counter;
		counter++;
	}
	if ((unsigned char)s[counter] == (unsigned char)c)
		marker = counter;
	if (marker == -1)
		return (NULL);
	else
		return ((char *)&s[marker]);
}
