/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:20:32 by aernie            #+#    #+#             */
/*   Updated: 2019/04/18 17:01:03 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		len;
	size_t	i;
	int		c;
	size_t	f;

	if (s1 == s2)
		return ((char *)s1);
	if (!(len = ft_strlen(s2)))
		return ((char*)s1);
	while (*s1 && n)
	{
		i = 0;
		c = 0;
		f = n;
		if (*s1 == s2[i])
			while (s2[i] && s1[c++] == s2[i++] && f--)
				if (c == len)
					return ((char*)s1);
		s1++;
		n--;
	}
	return (0);
}
