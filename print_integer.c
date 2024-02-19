#include "ft_printf.h"

int	print_int(int num)
{
	return(ft_putnbr_fd(num, 1));
}
