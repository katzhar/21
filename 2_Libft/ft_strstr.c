/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 13:27:27 by aernie            #+#    #+#             */
/*   Updated: 2019/04/17 14:18:15 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		len;
	int		i;
	int		c;

	i = 0;
	c = 0;
	len = ft_strlen(s2);
	if (len == 0)
		return ((char*)s1);
	while (*s1)
	{
		i = 0;
		c = 0;
		if (*s1 == s2[i])
			while (s2[i] && s1[c] == s2[i])
			{
				i++;
				c++;
			}
		if (c == len)
			return ((char*)s1);
		s1++;
	}
	return (0);
}
