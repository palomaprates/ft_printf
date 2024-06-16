#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbr_u(unsigned int nb)
{
	long	nbr;
	char	c;
	int	i;

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
