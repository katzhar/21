/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:38:17 by aernie            #+#    #+#             */
/*   Updated: 2019/04/25 14:38:22 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	len = ft_strlen(s) - 1;
	while (i < len && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	if (i > len)
		return (str = ft_strdup(""));
	return (str = ft_strsub(s, i, len - (size_t)i + 1));
}
