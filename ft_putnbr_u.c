/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:22:54 by pprates-          #+#    #+#             */
/*   Updated: 2024/06/18 13:46:12 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	long	nbr;
	char	c;
	int		i;

	nbr = nb;
	i = 0;
	if (nbr == 0)
	{
		i += write(1, "0", 1);
		return (i);
	}
	if (nbr >= 10)
		i += ft_putnbr_u(nbr / 10);
	c = nbr % 10 + 48;
	i += write(1, &c, 1);
	return (i);
}
