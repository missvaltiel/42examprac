/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 20:05:16 by karvin            #+#    #+#             */
/*   Updated: 2016/08/04 20:27:59 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// THIS IS A TEST VERSION ONLY FUNCTIONS ARE NEEDED IN THE SUBMIT, NOT A MAIN.
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (j > i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
		i++;
	}
	return(str);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	ft_strrev(argv[1]);	
	ft_putstr(argv[1]);
	return (0);
}
