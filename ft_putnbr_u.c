#include <unistd.h>
void	ft_putnbr_u(unsigned int nb)
{
	long	nbr;
	char	c;

	nbr = nb;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return;
	}	
	if (nbr >= 10)
		ft_putnbr_u(nbr / 10);
	c = nbr % 10 + 48;
	write(1, &c, 1);
}
