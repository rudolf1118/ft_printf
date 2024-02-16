#include "printf.h"
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int print_hexlow(unsigned int n) {
    char *s = "0123456789abcdef";
    if (n >= 16)
    {
        print_hexlow(n / 16);
        print_hexlow(n % 16);
    }
    else
        ft_putchar_fd(s[n],1);
}
#include <stdio.h>
int main ()
{
    print_hexlow(11030);
    printf("\n");
}