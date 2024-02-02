/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:05:04 by zfiros-a          #+#    #+#             */
/*   Updated: 2023/08/09 13:14:49 by zfiros-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putx(unsigned int c, char x, int *count)
{
	char	*hdec;

	if (x == 'x')
		hdec = "0123456789abcdef";
	else
		hdec = "0123456789ABCDEF";
	if (c < 16)
	{
		*count = *count + 1;
		write(1, &hdec[c], 1);
	}
	else
	{
		ft_putx(c / 16, x, count);
		ft_putx(c % 16, x, count);
	}
	return (*count);
}
