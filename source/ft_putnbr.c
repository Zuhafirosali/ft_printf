/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:29:32 by zfiros-a          #+#    #+#             */
/*   Updated: 2023/08/09 13:20:19 by zfiros-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putnbr(long nbr)
{
	char	c;

	if (nbr == -2147483648)
		ft_puts("-2147483648");
	else if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putc('-');
		ft_putnbr(nbr);
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr % 10 + '0';
		ft_putc(nbr + '0');
	}
}
