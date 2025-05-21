/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:23:26 by pprates-          #+#    #+#             */
/*   Updated: 2025/05/15 11:09:24 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (ptr >= 16)
	{
		i += ft_ptr(ptr / 16);
		i += ft_ptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			i += ft_putchar(ptr + 48);
		else
			i += ft_putchar(ptr - 10 + 'a');
	}
	return (i);
}

int	ft_putptr(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i += ft_ptr(ptr);
	}
	return (i);
}
