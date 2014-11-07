/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:03:44 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/07 17:16:20 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_memest(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	while (len--)
		*s++ = c;
	return (b);
}
