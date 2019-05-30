/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 18:54:04 by aernie            #+#    #+#             */
/*   Updated: 2019/04/23 18:54:06 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (s)
	{
		if (!(dst = ft_strnew(len)))
			return (NULL);
		ft_strncpy(dst, s + start, len);
		return (dst);
	}
	return (NULL);
}
