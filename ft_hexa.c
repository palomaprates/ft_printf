/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:16:16 by pprates-          #+#    #+#             */
/*   Updated: 2024/06/04 18:06:23 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_hexa(unsigned int nbr, char specifier)
{
	if (nbr >= 16)
	{
		ft_hexa(nbr / 16, specifier);
		ft_hexa(nbr % 16, specifier);
	}
	else
	{
		if (nbr < 10)
			ft_putchar(nbr + '0');
		else
		{
			if (specifier == 'X')
				ft_putchar(nbr - 10 + 'A');
			else if (specifier == 'x')
				ft_putchar(nbr - 10 + 'a');
		}
	}
}
