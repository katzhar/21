/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:55:45 by aernie            #+#    #+#             */
/*   Updated: 2019/04/25 19:20:37 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*n;

	if (size + 1 == 0)
		return (NULL);
	n = (char *)malloc(sizeof(char) * (size + 1));
	if (n == NULL)
		return (NULL);
	ft_memset(n, 0, size + 1);
	return (n);
}
