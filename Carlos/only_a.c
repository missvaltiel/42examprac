/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:45:18 by cbanales          #+#    #+#             */
/*   Updated: 2016/08/01 12:45:20 by cbanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_putchar('a');
	return (0);
}