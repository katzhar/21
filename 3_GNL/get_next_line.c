/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 11:28:47 by aernie            #+#    #+#             */
/*   Updated: 2019/05/30 12:52:55 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	verify_line(char **line, char **s, int fd)
{
	char	*tmp;
	char	*str;
	int		len;

	str = ft_strchr(s[fd], '\n');
	if (str)
	{
		tmp = ft_strdup(str + 1);
		len = str - s[fd];
		*line = ft_strsub(s[fd], 0, len);
		ft_strdel(&s[fd]);
		s[fd] = tmp;
		return (1);
	}
	else if (s[fd][0])
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
		return (1);
	}
	return (0);
}

int			get_next_line(const	int fd, char **line)
{
	static	char	*s[10000];
	char			*tmp;
	char			buff[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || !line)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && s[fd] == NULL)
		return (0);
	return (verify_line(line, s, fd));
}
