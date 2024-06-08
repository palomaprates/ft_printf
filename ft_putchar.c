#include <unistd.h>

int	ft_putchar(int c, int i)
{
	write(1, &c, 1);
	return i + 1;

}
