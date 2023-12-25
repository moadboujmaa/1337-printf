/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:56:17 by mboujama          #+#    #+#             */
/*   Updated: 2023/12/25 14:03:21 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(unsigned int nb, int *len)
{
	ft_putstr("0x", len);
	ft_puthexa(nb, 'x', len);
}
