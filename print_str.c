#include "printf.h"

int print_str(char *str)
{
    if (!str)
    {
        ft_putstr_fd("(null)", 1);
        return (6);
    }
        ft_putstr_fd(str, 1);
    return((int) ft_strlen(str));
}