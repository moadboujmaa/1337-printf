/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:17:56 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/23 16:42:18 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_format(char formatter, va_list ptr, int *len)
{
	if (formatter == 'c')
		ft_putchar((char)va_arg(ptr, int), len);
	else if (formatter == 'd' || formatter == 'i')
		ft_putnbr((int)va_arg(ptr, int), len);
	else if (formatter == 'u')
		ft_putnbr((unsigned int)va_arg(ptr, int), len);
	else if (formatter == 's')
		ft_putstr((char *)va_arg(ptr, char *), len);
	else if (formatter == 'x' || formatter == 'X')
		ft_puthexa((unsigned int)va_arg(ptr, int), formatter, len);
	else if (formatter == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_check_format((char)*str, ptr, &len);
		}
		else
		{
			write(1, str, 1);
			len++;
		}
		str++;
	}
	va_end(ptr);
	return (len);
}

int	main(void)
{
	ft_printf("---> %x <---", 555);
	return (0);
}
