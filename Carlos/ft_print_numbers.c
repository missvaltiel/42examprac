/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbanales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:28:03 by cbanales          #+#    #+#             */
/*   Updated: 2016/08/01 12:29:25 by cbanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	char digits;

	digits = '0';
	while (digits <= '9')
	{
		ft_putchar(digits);
		digits++;
	}
}
