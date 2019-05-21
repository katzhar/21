/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 11:28:47 by aernie            #+#    #+#             */
/*   Updated: 2019/05/21 19:52:04 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int verify_line(char **line, char **s, int fd)
{
	char *tmp;

	if (ft_strchr(s[fd], '\n'))
	{
		tmp = ft_strdup(ft_strchr(s[fd], '\n') + 1);
		*line = ft_strsub(s[fd], 0, ft_strchr(s[fd], '\n') - s[fd]);
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
	else 
		return (0);
}

int		main(const int fd, char **line)
{
	static char *s[10000];
	char buff[BUFF_SIZE + 1];
	char *tmp;
	int ret;

	if (fd < 0 && !line)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!s[fd])
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = tmp;
		write (1, &s[0], ret);
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && s[fd] == NULL)
		return (0);
	else
		return (verify_line(line, s, fd));
}

// {
// 	while ((*s)[len] != '\n' && (*s)[len] != '\0')
// 		len++;
// 	if ((*s)[len] == '\n')
// 	{
// 		*line = ft_strsub(*s, 0, len);
// 		tmp = ft_strdup(&((*s)[len + 1]));2
// 		free(*s);
// 		*s = tmp;
// 		if ((*s)[0] == '\0')
// 			ft_strdel(s);
// 	}
// 	else if ( s[fd][len] == '\0')
// 	{
// 		if (ret == BUFF_SIZE)
// 			return (get_next_line(fd, line));
// 		*line = ft_strdup(*s);
// 		ft_strdel(s);
// 	}
// 	return (1);
// }

// int		main(const int fd, char **line)
// {
// 	static char *s;
// 	int ret;
// 	char buff[BUFF_SIZE];
// 	char *tmp;

// 	if (fd < 0 || line == NULL)
// 		return (-1);
// 	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
// 	{
// 		buff[ret] = '\0';
// 		if (s == NULL)
// 			s = ft_strdup(buff);
// 		else 
// 		{
// 			tmp = ft_strjoin(&s[fd], buff);
// 			free(s);
// 			s[fd] = *tmp;
// 		}
// 		if (ft_strchr(&s[fd], '\n'))
// 		break ;
// 	}
// 	if (ret < 0)
// 		return (-1);
// 	else if (ret == 0 && s[fd] == NULL)
// 		return (0);
// 	else
// 		return (verify_line(line, &s, fd, ret));
// }


// int		main(int argc, char **argv)
// {
// 	int		fd;
// 	int		n;
// 	char	str[BUFF_SIZE];

// 	if (argc == 2)
// 	fd = open(argv[1], O_RDONLY);
// 	if (fd > 0)
// 	{
// 		n = BUFF_SIZE;
// 		while (n == BUFF_SIZE)
// 		{
// 			n = read(fd, str, BUFF_SIZE);
// 			write (1, &str[0], n);
// 		}
// 	}
// 	return (0);
// }
