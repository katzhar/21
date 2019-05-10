/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:38:17 by aernie            #+#    #+#             */
/*   Updated: 2019/04/08 17:43:38 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define SIZE 1024

int		main(int argc, char **argv)
{
	int		fd;
	int		n;
	char	str[SIZE];

	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd > 0)
	{
		n = SIZE;
		while (n == SIZE)
		{
			n = read(fd, str, SIZE);
			write(1, &str[0], n);
		}
	}
	return (0);
}
