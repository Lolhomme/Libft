/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:04:42 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/04 15:13:29 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dst, char const *src)
{
	int	a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dst[a] = 0;
	return (dest);
}
