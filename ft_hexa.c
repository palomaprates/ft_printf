/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:16:16 by pprates-          #+#    #+#             */
/*   Updated: 2025/05/15 11:09:24 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int nbr, char specifier)
{
	int	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_hexa(nbr / 16, specifier);
		i += ft_hexa(nbr % 16, specifier);
	}
	else
	{
		if (nbr < 10)
			i += ft_putchar(nbr + '0');
		else
		{
			if (specifier == 'X')
				i += ft_putchar(nbr - 10 + 'A');
			else if (specifier == 'x')
				i += ft_putchar(nbr - 10 + 'a');
		}
	}
	return (i);
}
