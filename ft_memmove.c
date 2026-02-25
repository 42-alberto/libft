
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	if (src > dest)
	{
		while (i < n)
		{
			d [i] = s [i];
			i++;
		}
	}
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			d [n] = s [n];
		}
	}
	return (dest);
}
