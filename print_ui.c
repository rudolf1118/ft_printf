#include "printf.h"

unsigned int	count(unsigned int num)
{
	unsigned int	counter;

	counter = 0;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

int	tens(int counter)
{
	unsigned int	ten;

	ten = 1;
	while (counter > 1)
	{
		ten *= 10;
		counter--;
	}
	return (ten);
}

int	print_ui(unsigned int n)
{
	int len;
	int num;
	int ten;
    unsigned int result;

    result = n;
	len = count(n);
	ten = tens(len);
    if (n < 0)
        print_ui(4294967295 - n + 1);
	while (ten != 0)
	{
		num = n / ten;
		ft_putchar_fd(num + '0', 1);
		n = n - num * ten;
		ten /= 10;
	}
    return (count(result));
}