/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 02:34:00 by aernie            #+#    #+#             */
/*   Updated: 2019/04/22 02:51:05 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *n;

	n = (char*)malloc(sizeof(char*) * size);
	if (n == NULL)
		return (NULL);
	ft_memset(n, 0, size);
	return (n);
}
