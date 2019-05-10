/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:40:00 by aernie            #+#    #+#             */
/*   Updated: 2019/04/14 20:41:39 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*s1;
	unsigned char		c1;
	int					i;

	i = 0;
	s1 = (unsigned char*)s;
	c1 = (unsigned char)c;
	while (n--)
	{
		if (s1[i] == c1)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
