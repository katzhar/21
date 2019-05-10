/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:08:51 by aernie            #+#    #+#             */
/*   Updated: 2019/04/05 16:38:06 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	str = (int*)malloc(sizeof(*str) * (max - min));
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
