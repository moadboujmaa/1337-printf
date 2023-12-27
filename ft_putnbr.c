/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 11:01:03 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/27 10:17:49 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long n, int *len)
{
	char	ch;

	if (n < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(-n, len);
	}
	else if (n <= 9)
	{
		ch = n + '0';
		ft_putchar(ch, len);
	}
	else
	{
		ch = n % 10 + '0';
		ft_putnbr(n / 10, len);
		ft_putchar(ch, len);
	}
}
