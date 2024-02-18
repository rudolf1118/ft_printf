#include "printf.h"

int check_flag(const char *input, va_list args)
{
    int len;

    len = 0;
    if (*input == 'c')
        len += print_char(va_arg(args, int));
    else if (*input == 's')
        len += print_str(va_arg(args, char *));
    else if (*input == 'd')
        len += print_decimal(va_arg(args, int));
    else if (*input == 'p')
        len += print_adress(va_arg(args, void *));
    else if (*input == 'i')
        len += print_int(va_arg(args, int));
    else if (*input == 'u')
        len += print_ui(va_arg(args, unsigned int));
    else if (*input == 'x')
        len += print_hex(va_arg(args, unsigned int), 'x');
    else if (*input == 'X')
        len += print_hex(va_arg(args, unsigned int), 'X');
    return (len);
}

int	ft_printf(const char *input, ...)
{
    unsigned int len;
    va_list args;

    len = 0;
    va_start(args, input);
    while (*input != '\0')
    {
        if (*input == '%')
        {
            if (ft_strchr("cspdiuxX%", *input))
            {
                  len += check_flag(input, args);
            }
            else if (*input == '%')
                len += print_char('%');
        }
        else
            len += print_char(*input);
        input++;
    }
    va_end(args);
    return (len);
}
