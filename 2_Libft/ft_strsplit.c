/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 21:58:56 by aernie            #+#    #+#             */
/*   Updated: 2019/05/10 19:16:24 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **dst)
{
	size_t	i;

	i = 0;
	while (dst[i])
	{
		free(dst[i]);
		dst[i] = NULL;
		i++;
	}
	free(dst);
	dst = NULL;
}

static	int	countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			count++;
		}
	}
	return (count);
}

static char	**memalloc(char const *s, char c)
{
	size_t	j;
	size_t	count;
	char	**dst;

	j = countwords(s, c);
	if (!(dst = (char **)malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	while (*s)
	{
		count = 0;
		while (*s == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			count++;
		}
		if (!(dst[j++] = (char *)malloc(sizeof(char) * (count + 1))))
		{
			ft_free(dst);
			return (NULL);
		}
		s++;
	}
	return (dst);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	words;
	char	**dst;

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
		while (s[i] && s[i] != c)
			dst[n][j++] = s[i++];
		dst[n++][j] = '\0';
		j = 0;
	}
	dst[n] = NULL;
	return (dst);
}
