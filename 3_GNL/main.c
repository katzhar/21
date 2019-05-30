/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:22:15 by aernie            #+#    #+#             */
/*   Updated: 2019/05/29 21:57:06 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(void)
{
	int		fd;
	char	*str;

	fd = open("get_next_line.c", O_RDONLY);
	while (get_next_line(fd, &str))
	{
		printf("%s\n", str);
		ft_strdel(&str);
	}
}
