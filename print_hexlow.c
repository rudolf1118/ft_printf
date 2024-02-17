#include "printf.h"
/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
*/
int hex_len (unsigned int n) {
    int count;

    count = 0;
    while (n != 0)
    {
        count++;
        n /= 16;
    }
    return (count);
}

void put_hex (unsigned int n, char format)
{
    if (n >= 16)
    {
        put_hex(n / 16, format);
        put_hex(n % 16, format);
    }
    else if (n <= 9)
        ft_putchar_fd(n + '0',1);
    else if (format == 'x')
        ft_putchar_fd((n + 39) + '0', 1);
    else if (format == 'X')
        ft_putchar_fd((n + 7) + '0', 1);
}

int print_hexlow(unsigned int n, char format) {
    put_hex(n, format);
    return (hex_len(n));
}

/*
#include <stdio.h>
int main ()
{
    print_hexlow(37123812, 'X');
    printf("\n");
    printf("%d",hex_len(37123812));
}
 */