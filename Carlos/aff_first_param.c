/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:03:02 by cbanales          #+#    #+#             */
/*   Updated: 2016/08/01 12:22:43 by cbanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
