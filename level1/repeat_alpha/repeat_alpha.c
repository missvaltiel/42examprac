/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 20:53:17 by karvin            #+#    #+#             */
/*   Updated: 2016/08/02 22:20:46 by karvin           ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_repeat_alpha(char *str)
{
	int		i;
	int		reps;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			reps = str[i] - '`';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			reps = str[i] - '@';
		else
			reps = 1;
		while (reps > 0)
		{
			ft_putchar(str[i]);
			reps--;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_repeat_alpha(argv[1]);
	}
	ft_putchar('\n');
	return(0);
}
