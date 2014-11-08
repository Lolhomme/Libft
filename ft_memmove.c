/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:28:32 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/08 17:22:15 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned			*ptrdst;
	const unsigned		*ptrsrc;

	if (!len)
		return (dst);
	ptrdst = (unsigned char *)dst;
	ptrsrc = (const unsigned char *)src;
	if (ptrsrc < ptrdst)
	{
		ptrdst += len;
		ptrsrc += len;
		while (len--)
			*--ptrdst = *--ptrsrc;
	}
	else
		while (len--)
			*ptrdst++ = *ptrsrc++;
	return (dst);
}
