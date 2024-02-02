/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:59:42 by zfiros-a          #+#    #+#             */
/*   Updated: 2023/08/09 13:33:39 by zfiros-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char	*string, ...)
{
	va_list	args;
	int		i;
	int		result;

	i = 0;
	result = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			ft_check(string[i], &result, args);
		}
		else
			result += ft_putc(string[i]);
		i++;
	}
	va_end(args);
	return (result);
}
