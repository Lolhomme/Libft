/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:23:20 by alaulom           #+#    #+#             */
/*   Updated: 2016/02/23 15:00:17 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *)malloc(ft_strlen(s1) * sizeof(char) + sizeof(char));
	if (!dst)
		return (NULL);
	return (ft_strcpy(dst, s1));
}
