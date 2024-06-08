#include <unistd.h>
#include <stdio.h>

int	ft_ptr(unsigned long long ptr, int i)
{

	if (ptr >= 16)
	{
		i = ft_ptr(ptr / 16, i);
		i = ft_ptr(ptr % 16, i);
	}
	else
	{
		if (ptr < 10)
			i = ft_putchar(ptr + 48, i);
		else
			i = ft_putchar(ptr - 10 + 'a', i);
	}
	return (i);
}

int	ft_putptr(unsigned long long ptr)
{
	int	i;
	if(!ptr)
		i += write(1, "(nil)", 5);
	else
	{
		i += write(1, "0x", 2);
		i = ft_ptr(ptr, i);
	}
	return (i);
}
