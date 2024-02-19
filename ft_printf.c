#include "ft_printf.h"


int checkerforpointer (va_list args)
{
    return (print_adress(va_arg(args, void *)));
}

int check_flag(char input, va_list args)
{
    int len;

    len = 0;
    if (input == 'p')
       len += checkerforpointer(args);
    else if (input == '%')
        len += print_char('%');
    else if (input == 'c')
        len += print_char(va_arg(args, int));
    else if (input == 'd')
        len += print_decimal(va_arg(args, int));
    else if (input == 'i')
        len += print_int(va_arg(args, int));
    else if (input == 'u')
        len += print_ui(va_arg(args, unsigned int));
    else if (input == 'x')
        len += print_hex(va_arg(args, unsigned int), 'x');
    else if (input == 'X')
        len += print_hex(va_arg(args, unsigned int), 'X');
    else if (input == 's')
        len += print_str(va_arg(args, char *));
    return (len);
}

int    ft_printf(const char *input, ...)
{
    unsigned int len;
    va_list args;

    len = 0;
    va_start(args, input);
    if (*input == '%' && *(input + 1) == '\0')
        return (0);
    while (*input)
    {
        if (*input == '%')
        {
            len += check_flag(*(input + 1), args);
            input++;
        }
        else
            len += print_char(*input);
        input++;
    }
    va_end(args);
    return (len);
}