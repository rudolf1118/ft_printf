#include "printf.h"
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int print_hexlow(unsigned int n)
{
    char *s = "0123456789abcdef";
    char buff[20];
    unsigned int number;
    int i;

    i = 0;
    number = n;
    while (number > 1)
    {
        buff[i++] = s[number % 16];
        number /= 16;
    }
    i--;
    while (i >= 0)
    {
        ft_putchar_fd(buff[i],1);
        i--;
    }
}
int main ()
{

    print_hexlow(4294967295); 
    printf("\n");
}