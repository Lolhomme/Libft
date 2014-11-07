/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:55:56 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/07 15:23:26 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		scan(char *str, const char *to_find)
{
	int			i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int			i;
	char		*ptrstr;

	if (!*to_find)
		return (ptrstr);
	i = 0;
	if (n < ft_strlen(to_find))
		return (NULL);
	while (ptrstr[i] && n--)
	{
		if (ptrstr[i] == to_find[0])
			if (scan(&ptrstr[i], to_find))
				return (&ptrstr[i]);
		i++;
	}
	return (NULL);
}
