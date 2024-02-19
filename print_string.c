#include "ft_printf.h"

int print_str(char *str)
{
    if (!str)
        str = "(null)";
    ft_putstr_fd(str, 1);
    return ((int)ft_strlen(str));
}