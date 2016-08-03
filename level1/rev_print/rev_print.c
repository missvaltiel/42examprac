/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 22:22:15 by karvin            #+#    #+#             */
/*   Updated: 2016/08/02 22:59:28 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void		ft_alphaback(char *str)
{
	int		i;

	i = ft_strlen(str) - 1;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_alphaback(argv[1]);
	ft_putchar('\n');
	return (0);
}
