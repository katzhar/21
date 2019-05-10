/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 20:05:26 by aernie            #+#    #+#             */
/*   Updated: 2019/05/08 13:20:23 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long	i;
	int				sign;

	i = 0;
	sign = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit((int)*str))
	{
		if ((i * 10 + (*str - 48) - (*str - 48)) / 10 != i)
		{
			if (sign == 1)
				return (0);
			return (-1);
		}
		i = i * 10 + (unsigned long)*str - 48;
		str++;
	}
	return (i * sign);
}
