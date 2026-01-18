
#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	retval;
	unsigned int	i;

	i = 0;
	retval = ft_strlen(src);
	if (size == 0)
		return (retval);
	while ((src[i] != '\0') && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (retval);
}
