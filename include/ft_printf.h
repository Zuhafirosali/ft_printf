/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfiros-a <zfiros-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:49:31 by zfiros-a          #+#    #+#             */
/*   Updated: 2023/08/09 13:44:47 by zfiros-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_nbrlen(long nbr);
int		ft_putx(unsigned int c, char x, int *count);
int		ft_putp(uintptr_t c, int *result, int *memad);
void	ft_check(char string, int *count, va_list args);
int		ft_putc(char c);
int		ft_puts(char *s);
int		ft_putd(int t);
int		ft_putu(unsigned int t);
size_t	ft_strlen(const char *s);
void	ft_putnbr(long nbr);
int		ft_printf(const char	*string, ...);

#endif