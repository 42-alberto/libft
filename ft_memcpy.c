
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
