/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:05:39 by karvin            #+#    #+#             */
/*   Updated: 2016/08/03 04:02:55 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' &&
					str[i] <= 'M'))
			ft_putchar(str[i] + 13);
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' &&
					str[i] <= 'Z'))
			ft_putchar(str[i] - 13);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot13(argv[1]);
	ft_putchar('\n');
	return (0);
}
