/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeshragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 23:29:02 by aeshragh          #+#    #+#             */
/*   Updated: 2016/08/05 00:10:15 by aeshragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ssstrip(char *s1, char *s2, char c)
{
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0')
	{
		if (s1[i1] == c)
			s1[i1] = -1;
		i1++;
	}
	while (s2[i2] != '\0')
	{
		if (s2[i2] == c)
			s2[i2] = -1;
		i2++;
	}
}

void	come_together(char *s1, char *s2)
{
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	while (s1[i1] != '\0' && s2[i2] != '\0')
	{
		while (s1[i1] != '\0')
		{
			if (s1[i1] == -1)
				i1++;
			else
			{
				putchar(s1[i1]);
				ssstrip(s1, s2, s1[i1]);
				i1++;
			}
		}
		while (s2[i2] != '\0')
		{
			if (s2[i2] == -1)
				i2++;
			else
			{
				putchar(s2[i2]);
				ssstrip(s1, s2, s2[i2]);
				i2++;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		come_together(argv[1], argv[2]);
	putchar('\n');
	return (0);
}
