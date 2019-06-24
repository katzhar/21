/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <aernie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 19:19:45 by aernie            #+#    #+#             */
/*   Updated: 2019/06/22 19:27:16 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
    char c;

    if (n < 0)
    {
        write (1, "-", 1);
        n *= -1;
    }
    if (n < 10)
    {
        c = n + 48;
        write (1, &c, 1);
    }
    else 
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int     main(int argc, char **argv)
{
    ft_putnbr(argc - 1);
    write (1, "\n", 1);
    return (0);
}
