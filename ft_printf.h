/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 10:45:05 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/27 10:14:18 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char s, int *len);
void	ft_putnbr(long n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_puthexa(unsigned long nb, char c, int *len);
void	ft_putpointer(unsigned long nb, int *len);

#endif