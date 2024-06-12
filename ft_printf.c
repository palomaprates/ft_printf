/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:51:51 by pprates-          #+#    #+#             */
/*   Updated: 2024/06/12 12:19:02 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void	ft_printf(char *str, ...)
{
	va_list	args;
	int	i;
	i = 0;
	va_start(args, str);

	while (str[i])
	{
		if(str[i] == '%' && str[i + 1] == 's')
			ft_putstr(va_arg(args, char *));
		if(str[i] == '%' && str[i + 1] == 'c')
			ft_putchar(va_arg(args, char));
		if(str[i] == '%' && str[i + 1] == 'd' || str[i] == '%' && str[i + 1] == 'i')
			ft_putnbr(va_arg(args, int));
		if(str[i] == '%' && str[i + 1] == 'u')
			ft_putnbr_u(va_arg(args, unsigned int));
		if(str[i] == '%' && str[i + 1] == 'x' || str[i] == '%' && str[i + 1] == 'X')
			ft_hexa(va_arg(args, unsigned int), str[i + 1]);
		i++;
	}
	va_end(args);
}

int main()
{
	printf("%x\n", 1234);
	ft_printf("%x", 1234);

}
