/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yso <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 16:14:30 by yso               #+#    #+#             */
/*   Updated: 2016/08/04 16:14:32 by yso              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define LOWERCASE		str[i] >= 'a' && str[i] <= 'z'
#define UPPERCASE		str[i] >= 'A' && str[i] <= 'Z'
#define SPACE			str[i] == ' '
#define SPACESPECIAL	SPACE || str[i] <= 47 || (str[i] >= 91 && str[i] <= 96)

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (SPACESPECIAL)
		{
			ft_putchar(str[i]);
			i++;
		}
		if (LOWERCASE)
			str[i] = str[i] - 32;
		ft_putchar(str[i]);
		i++;
		while (!(SPACESPECIAL))
		{
			if (UPPERCASE)
				str[i] = str[i] + 32;
			ft_putchar(str[i]);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_strcapitalize(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}
