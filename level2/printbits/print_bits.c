/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 20:58:26 by karvin            #+#    #+#             */
/*   Updated: 2016/08/04 22:53:36 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		print_bits(unsigned char octet)
{
	char		byte_str[8];
	int			i;

	i = 7;
	while (i >= 0)
	{
		byte_str[i] = (octet & 1) + '0';
		octet = octet >> 1;
		i--;
	}
	write(1, byte_str, 8);
}

int			main(void)
{
	unsigned char	octet;

	octet = 26;
	print_bits(octet);
	return (0);
}
