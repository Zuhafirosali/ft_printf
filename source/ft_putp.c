/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:03:06 by zfiros-a          #+#    #+#             */
/*   Updated: 2023/08/09 13:29:27 by zfiros-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putp(uintptr_t c, int *result, int *memad)
{
	char	*hdec;

	hdec = "0123456789abcdef";
	if (c < 16)
	{
		if (*memad == 0)
		{
			*result = *result + ft_puts("0x");
			*memad = 1;
		}
		*result = *result + 1;
		write(1, &hdec[c], 1);
	}
	else
	{
		ft_putp(c / 16, result, memad);
		ft_putp(c % 16, result, memad);
	}
	return (*result);
}
