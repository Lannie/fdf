/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:48:19 by hwilderm          #+#    #+#             */
/*   Updated: 2019/06/04 17:48:21 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		content_new_line(char **str, char **line, int fd)
{
	char		*tmp;
	char		*p;
	int			len;
	char		saver;

	len = 0;
	p = ft_strchr(str[fd], '\n');
	if (!p)
		p = ft_strchr(str[fd], '\0');
	saver = *p;
	*p = '\0';
	*line = ft_strdup(str[fd]);
	tmp = NULL;
	if (saver == '\n')
		if (!(tmp = ft_strdup(p + 1)))
			return (-1);
	free(str[fd]);
	str[fd] = tmp;
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*str[FT_OPEN_MAX];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd > FT_OPEN_MAX)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!str[fd])
			str[fd] = ft_strnew(0);
		tmp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret == 0 && (!str[fd] || str[fd][0] == '\0'))
		return (0);
	return ((ret == -1) ? (-1) : content_new_line(str, line, fd));
}
