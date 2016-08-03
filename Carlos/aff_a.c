/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:32:25 by cbanales          #+#    #+#             */
/*   Updated: 2016/08/02 02:33:34 by cbanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
	{
		ft_putchar('a');
	}
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return (0);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
