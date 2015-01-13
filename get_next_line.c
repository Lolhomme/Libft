/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <anthonylaulom@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 14:55:44 by alaulom           #+#    #+#             */
/*   Updated: 2015/01/11 17:35:19 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char **line)
{
	static char		*mem;
	char			buff[BUFF_SIZE + 1];
	int				ret;

	ret = 1;
	if (BUFF_SIZE <= 0 || !line)
		return (-1);
	if (!mem)
		mem = ft_strnew(0);
	while (!(ft_strchr(mem, '\n')) && (ret = read(fd, buff, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buff[ret] = 0;
		mem = ft_strjoin(mem, buff);
	}
	if (ft_strchr(mem, '\n') || ((*line = ft_strdup(mem)) && 0))
		*line = ft_strsub(mem, 0, ft_strchr(mem, '\n') - mem + 1);
	if (ret)
		line[0][ft_strlen(*line) - 1] = 0;
	mem = ft_strsub(mem, ft_strchr(mem, '\n') - mem + 1,
			ft_strlen(ft_strchr(mem, '\n')));
	return (ret == 0 ? 0 : 1);
}
