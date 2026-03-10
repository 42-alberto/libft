
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	substr_len;
	char	*substr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen (s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len < s_len - start)
		substr_len = len;
	else
		substr_len = s_len - start;
	substr = malloc (sizeof(char) * (substr_len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, substr_len + 1);
	return (substr);
}
