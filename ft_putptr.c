#include "ft_printf.h"
#include <stdio.h>

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

	if(!ptr)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i += ft_ptr(ptr);
	}
	return (i);
}
