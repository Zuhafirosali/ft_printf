/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:17:53 by zfiros-a          #+#    #+#             */
/*   Updated: 2023/08/09 13:29:12 by zfiros-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_nbrlen(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		count++;
	}
	if (nbr == 0)
		count = 1;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}
