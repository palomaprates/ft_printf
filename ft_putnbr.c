/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:22:47 by pprates-          #+#    #+#             */
/*   Updated: 2024/06/18 13:45:26 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long	nbr;
	char	c;
	int		i;

	i = 0;
	nbr = nb;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		i += write(1, "-", 1);
	}
	if (nbr >= 10)
		i += ft_putnbr(nbr / 10);
	c = nbr % 10 + 48;
	i += write(1, &c, 1);
	return (i);
}
