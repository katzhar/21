/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 11:51:38 by aernie            #+#    #+#             */
/*   Updated: 2019/05/14 17:03:04 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# define BUFF_SIZE 64

int		get_next_line(int const fd, char **line);

#endif
