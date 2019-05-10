/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aernie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:14:46 by aernie            #+#    #+#             */
/*   Updated: 2019/04/05 16:43:30 by aernie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_params(int argc, char **argv)
{
	int q;
	int a;

	q = 1;
	a = 0;
	while (q < argc)
	{
		while (argv[q][a] != '\0')
		{
			ft_putchar(argv[q][a]);
			a++;
		}
		a = 0;
		q++;
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		sw;
	char	*k;

	sw = 1;
	while (sw == 1)
	{
		i = 1;
		sw = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				k = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = k;
				sw = 1;
			}
			i++;
		}
	}
	ft_params(argc, argv);
	return (0);
}
