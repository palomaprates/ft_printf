#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

#include <stdio.h>

int	ft_putchar(int c);

int	ft_putstr(char *str);

int	ft_putnbr(int nb);

int	ft_putnbr_u(unsigned int nb);

int	ft_hexa(unsigned int nbr, char specifier);

int	ft_putptr(unsigned long long ptr);

#endif
