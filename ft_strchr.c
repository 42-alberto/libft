
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_char;

	c_char = (char)c;
	while (*s != c_char)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
