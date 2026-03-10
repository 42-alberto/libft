
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	if (nb / 10 > 0)
		ft_putnbr_fd((int)(nb / 10), fd);
	ft_putchar_fd((nb % 10 + '0'), fd);
}
/*
//implementation using ft_itoa
{
	char	*n_str;

	n_str = ft_itoa(n);
	if (!n_str)
		return ;
	ft_putstr_fd (n_str, fd);
	free (n_str);
}
*/
