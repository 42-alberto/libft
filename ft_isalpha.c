
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c | 32) >= 'a' && (c | 32) <= 'z' );
}
 