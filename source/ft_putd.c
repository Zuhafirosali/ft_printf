/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:15:21 by zfiros-a          #+#    #+#             */
/*   Updated: 2023/08/09 13:21:39 by zfiros-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putd(int t)
{
	int	i;

	i = 0;
	i = ft_nbrlen(t);
	ft_putnbr(t);
	return (i);
}
