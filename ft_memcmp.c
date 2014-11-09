/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:49:54 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/09 11:14:28 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*ptrs1;
	const unsigned char		*ptrs2;

	ptrs1 = (const unsigned char *)s1;
	ptrs2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ptrs1 != *ptrs2)
			return (*ptrs1 - *ptrs2);
		ptrs1++;
		ptrs2++;
	}
	return (0);
}
