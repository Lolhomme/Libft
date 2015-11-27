/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:23:48 by alaulom           #+#    #+#             */
/*   Updated: 2015/11/27 11:41:28 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

char	*ft_strncpy(char *dst, char *src, size_t n)
{
	size_t	l;
	size_t	a;

	l = ft_strlen(src);
	a = 0;
	while(n > 0)
		if(l < n)
			dest[a] = 0;
	else
	{
		dest[a] = src[a];
		a++;
		n--;
	}
	return (dst);
}
