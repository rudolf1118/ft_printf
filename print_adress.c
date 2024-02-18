#include "printf.h"

int hex_len (unsigned long long n)
{
    int count;

    count = 0;
    while (n != 0)
    {
        count++;
        n /= 16;
    }
    return (count);
}

void put_hex (unsigned long long n, char format)
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

int print_heximal(unsigned long long n, char format)
{
    put_hex(n, format);
    return (hex_len(n));
}
int print_adress (void *ad)
{
    unsigned long long result;

    result = (unsigned long long)ad;
    ft_putstr_fd("0x", 1);
    return(print_heximal(result, 'x'));
}

/*#include <stdio.h>
int main ()
{
    char *x = "hello,";
    int y = print_adress(x);
    printf("%c",'\n');
    printf("%d", y);
    printf("%c",'\n');
    printf("%p", x);
} */