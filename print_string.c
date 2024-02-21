#include "ft_printf.h"

int print_str(char *str)
{
    if (!str) {
        str = "(null)";
    }
    return (write(1, str, ft_strlen(str)));
}