/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 21:58:56 by aernie            #+#    #+#             */
/*   Updated: 2019/04/28 21:58:58 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			while (*s != c && *s != '\0')
				s++;
			count++;
		}
	}
	return (count);
}

static char	**memalloc(char const *s, char c)
{
	int		j;
	int		count;
	char	**dst;

	j = countwords(s, c);
	count = 0;
	if (!(dst = (char **)malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	j = 0;
	while (*s)
	{
		count = 0;
		while (*s == c)
			s++;
		while (*s != c && *s != '\0')
		{
			s++;
			count++;
		}
		if (!(dst[j++] = (char *)malloc(sizeof(char) * (count + 1))))
			return (NULL);
		s++;
	}
	return (dst);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		n;
	char	**dst;
	int		words;

	i = 0;
	j = 0;
	n = 0;
	if (!s || !(dst = memalloc(s, c)))
		return (NULL);
	words = countwords(s, c);
	while (n < words)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			dst[n][j++] = s[i++];
		dst[n++][j] = '\0';
		j = 0;
	}
	dst[n] = NULL;
	return (dst);
}
