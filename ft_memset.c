
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*byte;
	size_t			i;

	byte = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		byte[i] = c;
		i++;
	}
	return (s);
}
