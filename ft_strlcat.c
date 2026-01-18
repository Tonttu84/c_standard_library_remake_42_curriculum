

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count++] != 0)
	{
	}
	return (--count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	rval;

	rval = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
	{
		return (size + ft_strlen(src));
	}
	while ((size - 1) && *dst)
	{
		dst++;
		size--;
	}
	while (*src && (size - 1))
	{
		*dst = *src;
		size--;
		dst++;
		src++;
	}
	*dst = '\0';
	return (rval);
}
