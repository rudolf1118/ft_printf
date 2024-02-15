#include "printf.h"

static int	count(unsigned int num)
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

static int	tens(int counter)
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

static int	checker(unsigned int n)
{
	unsigned int	max;

	max = 4294967295;
	if (n < 0)
		print_ui(max - n + 1);
}

int	print_ui(unsigned int n)
{
	int len;
	int num;
	int ten;
	char res;

	len = count(n);
	ten = tens(len);
	while (ten != 0)
	{
		num = n / ten;
		res = num + '0';
		ft_putchar_fd(num + '0', 1);
		n = n - num * ten;
		ten /= 10;
	}
}