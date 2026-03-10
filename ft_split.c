
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**free_all(char **lst, int i)
{
	while (i > 0)
		free(lst[--i]);
	free(lst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	int		i;
	int		i_len;

	i = 0;
	if (!s)
		return (NULL);
	str_arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str_arr)
		return (NULL);
	while (*s)
	{
		if (*s == c && *s++ == c)
			continue ;
		i_len = 0;
		while (s[i_len] && s[i_len] != c)
			i_len++;
		str_arr[i] = ft_substr(s, 0, i_len);
		if (!str_arr[i])
			return (free_all(str_arr, i));
		i++;
		s += i_len;
	}
	str_arr[i] = NULL;
	return (str_arr);
}
