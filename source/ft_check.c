/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:45:54 by zfiros-a          #+#    #+#             */
/*   Updated: 2023/08/09 13:41:10 by zfiros-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_check(char s, int *result, va_list args)
{
	int	memad;

	memad = 0;
	if (s == 'c')
		*result = *result + ft_putc(va_arg(args, int));
	else if (s == 's')
		*result = *result + ft_puts(va_arg(args, char *));
	else if (s == 'p')
		ft_putp(va_arg(args, uintptr_t), result, &memad);
	else if (s == 'd' || s == 'i')
		*result = *result + ft_putd(va_arg(args, int));
	else if (s == 'u')
		*result = *result + ft_putu(va_arg(args, unsigned int));
	else if (s == 'x' || s == 'X')
		ft_putx(va_arg(args, unsigned int), s, result);
	else if (s == '%')
		*result = *result + ft_putc('%');
}
