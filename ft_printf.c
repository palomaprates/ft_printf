/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paloma <paloma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:51:51 by pprates-          #+#    #+#             */
/*   Updated: 2024/06/16 09:50:15 by paloma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, ...)
{
	va_list	args;
	int	size;

	size = 0;
	va_start(args, str);

	while (*str)
	{
		if((*str == '%' && *(str + 1) == 's') && str++)
			size += ft_putstr(va_arg(args, char *));
		else if((*str == '%' && *(str + 1) == 'c') && str++)
			size += ft_putchar(va_arg(args, int));
		else if (((*str == '%' && *(str + 1) == 'd') ||
			(*str == '%' && *(str + 1) == 'i')) && str++)
			size += ft_putnbr(va_arg(args, int));
		else if ((*str == '%' && *(str + 1) == 'u') && str++)
			size += ft_putnbr_u(va_arg(args, unsigned int));
		else if (((*str == '%' && *(str + 1) == 'x') ||
			(*str == '%' && *(str + 1) == 'X')) && str++)
			size += ft_hexa(va_arg(args, unsigned int), *str);
		else if ((*str == '%' && *(str + 1) == 'p') && str++)
			size += ft_putptr(va_arg(args, unsigned long long));
		else if ((*str == '%' && *(str + 1) == '%') && str++)
			size += write(1, "%", 1);
		else
			size += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (size);
}

int main()
{
	printf("tamanho ori:%d\n", printf("nbr: %x\n", 200));
	printf("tamanho meu:%d\n", ft_printf("nbr: %x\n", 200));
}
