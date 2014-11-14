/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:36:23 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/14 11:15:53 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*ptrdst;
	const unsigned char		*ptrsrc;
	unsigned char			cara;

	if (!src || !dst)
		return (NULL);
	ptrdst = (unsigned char *)dst;
	ptrsrc = (const unsigned char *)src;
	cara = (unsigned char)c;
	while (n--)
		if ((*ptrdst++ = *ptrsrc++) == cara)
			return (ptrdst);
	return (NULL);
}
