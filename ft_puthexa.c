/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:58:09 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/23 16:31:12 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int nb, char c, int *len)
{
	char	hex[100];
	int		i;
	int		temp;

	(void)len;
	i = 0;
	printf("number = %d", nb);
	while (nb != 0)
	{
		temp = nb % 16;
		if (temp < 10)
			hex[i] = temp + '0';
		else
		{
			if (c == 'x')
				temp = temp + 87;
			else
				temp = temp + 55;
		}
		hex[i++] = temp;
		nb /= 16;
	}
}
