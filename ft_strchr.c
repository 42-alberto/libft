
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_found;
	char	c_char;

	s_found = (char *) s;
	c_char = (char) c;
	while (*s_found || (c_char == '\0' && !*s_found))
	{
		if (*s_found == c_char)
			return (s_found);
		s_found++;
	}
	return (NULL);
}
