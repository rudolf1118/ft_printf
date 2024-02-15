#include "printf.h"

int	singlechar(char c)
{
	write(1, &c, 1);
	return (1);
}