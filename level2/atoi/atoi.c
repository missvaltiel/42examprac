/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 05:15:56 by karvin            #+#    #+#             */
/*   Updated: 2016/08/03 12:59:05 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//this is a test function. only the function was asked for.
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int		ft_atoi(const char *str)
{
	int		i;
	int		neg;
	int		out;

	i = 0;
	neg = 1;
	out = 0;
	while(str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '-' ||
				str[i] == '+' || str[i] == '\n')
		{
			if (str[i] == '-')
				neg = neg * -1;
			i++;
		}
		if (str[i] < 48 || str[i] > 57)
			return(0);
		else
		{
			out = out * 10 + (str[i] - 48);
			i++;
		}
	}
	ft_putnbr(neg * out);
	return (neg * out);
}

int		main(int argc, char **argv)
{
	ft_atoi(argv[1]);
	return(0);
}
