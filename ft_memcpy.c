/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 11:25:06 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/14 11:29:10 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*ptrdst;
	const unsigned char		*ptrsrc;

	ptrdst = (unsigned char *)dst;
	ptrsrc = (const unsigned char *)src;
	while (n--)
		*ptrdst++ = *ptrsrc++;
	return (dst);
}
