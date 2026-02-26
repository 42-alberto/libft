
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_found;
	unsigned char	c_char;
	size_t			i;

	s_found = (unsigned char *)s;
	c_char = c;
	i = 0;
	while (i < n)
	{
		if (s_found[i] == c_char)
			return ((void *)(s_found + i));
		i++;
	}
	return (NULL);
}
