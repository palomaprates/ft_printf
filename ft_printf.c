/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:51:51 by pprates-          #+#    #+#             */
/*   Updated: 2024/06/18 15:57:45 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_arg(const char *str, int *size, va_list args)
{
	if (*str == 's')
		*size += ft_putstr(va_arg(args, char *));
	else if (*str == 'c')
		*size += ft_putchar(va_arg(args, int));
	else if (*str == 'd' || *str == 'i')
		*size += ft_putnbr(va_arg(args, int));
	else if (*str == 'u')
		*size += ft_putnbr_u(va_arg(args, unsigned int));
	else if (*str == 'x' || *str == 'X')
		*size += ft_hexa(va_arg(args, unsigned int), *str);
	else if (*str == 'p')
		*size += ft_putptr(va_arg(args, unsigned long long));
	else if (*str == '%')
		*size += write(1, "%", 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		size;

	size = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && str++)
			print_arg(str, &size, args);
		else
			size += write(1, str, 1);
		str++;
	}
	return (va_end(args), size);
}

// int main()
// {
// 	char	*i = "dasdas";
// 	// printf("tamanho ori:%d\n", printf("nbr: %p\n", i));
// 	printf("tamanho meu:%d\n", ft_printf("nbr: %p\n", i));
// }
