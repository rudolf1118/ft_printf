#include "printf.h"

int print_str(char *str)
{
    int index;

    ft_putstr_fd(str, 1);
    return((int) ft_strlen(str));
}