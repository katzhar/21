/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:31:32 by aernie            #+#    #+#             */
/*   Updated: 2019/05/11 09:50:16 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (s1 && s2)
	{
		i = 0;
		j = 0;
		dst = (char*)malloc(sizeof(char*) *
			(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (dst == NULL)
			return (NULL);
		while (s1[i])
		{
			dst[i] = s1[i];
			i++;
		}
		while (s2[j])
			dst[i++] = s2[j++];
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}
