
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size > 0 && (nmemb > (size_t)-1 / size))
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (array);
	ft_bzero(array, nmemb * size);
	return (array);
}
