/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 16:31:22 by karvin            #+#    #+#             */
/*   Updated: 2016/08/02 16:43:12 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	while (str != '\0')
	{
		if (*str == 'a')
		{
			write(1, str, 1);
			ft_putchar('\n');
			break ;
		}
		else
		{
			str++;
		}
	}
}


int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	if (argc == 2)
	{
		aff_a(argv[2]);
	}
	return (0);
}
