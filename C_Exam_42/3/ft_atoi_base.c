/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 17:32:18 by aernie            #+#    #+#             */
/*   Updated: 2019/06/23 20:29:53 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int ft_convert(char	str)
{
	if (str >= 48 && str <= 57)
		str -= 48;
	else if (str >= 'a' && str <= 'f')
		str -= 87;
	else if (str >= 'A' && str <= 'F')
		str -= 55;
	else
		return (0);
	return (str);
}

int		base_power(int base, int i)
{
	int a;

	if (i == 0)
		base = 1;
	a = 1;
	if (i > 0)
	{
		while (i > 0)
		{
			a *= base;
			i--;
		}
	}
	return (a);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int j;
	int sum;

	i = ft_strlen(str);
	j = 0;
	sum = 0;
	if (str_base > 1 && str_base < 17)
	{
		while (str[j])
		{
			sum += ft_convert(str[j]) * base_power(str_base, (i - 1));
			j++;
			i--;
		}
	}
	return (sum);
}

int		main(void)
{
	const	char str[] = "4d2";
	int str_base = 16;
	printf("%d\n", ft_atoi_base(str, str_base));
	return (0);
}