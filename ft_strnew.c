/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:06:59 by alaulom           #+#    #+#             */
/*   Updated: 2014/11/11 14:19:47 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(size);
	if (!ptr)
		return (NULL);
	while (size--)
		ptr[size + 1] = 0;
	*ptr = 0;
	return (ptr);
}
