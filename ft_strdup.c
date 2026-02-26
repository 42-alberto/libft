
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*s_dup;

	s_len = ft_strlen(s) + 1;
	s_dup = malloc(s_len);
	if (s_dup == NULL)
		return (NULL);
	return (ft_memmove(s_dup, s, s_len));
}
