
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_char;
	const unsigned char	*s2_char;

	i = 0;
	s1_char = (const unsigned char *) s1;
	s2_char = (const unsigned char *) s2;
	if (n == 0)
		return (0);
	while (s1_char[i] == s2_char[i] && i < n - 1)
		i++;
	return (s1_char[i] - s2_char[i]);
}
