
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_mod;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	s_mod = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s_mod == NULL)
		return (NULL);
	while (s[i])
	{
		s_mod[i] = f(i, s[i]);
		i++;
	}
	s_mod[i] = '\0';
	return (s_mod);
}
