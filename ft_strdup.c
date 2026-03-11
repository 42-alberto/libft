/* ************************************************************************** */
/*                                                                            */
/*    /\_/\                                               :::      ::::::::   */
/*   ( o.o )   "Punteros y café,                        :+:      :+:    :+:   */
/*    > ^ <         todo va a salir bien."            +:+ +:+         +:+     */
/*   By: Me                                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0001/01/01 00:00:01 by Me                #+#    #+#             */
/*   Updated: 0001/01/01 00:00:02 by Me               ###   ########.fr       */
/*                                                                        pito*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*s_dup;

	s_len = ft_strlen(s);
	s_dup = malloc(s_len + 1);
	if (s_dup == NULL)
		return (NULL);
	return (ft_memmove(s_dup, s, s_len + 1));
}
