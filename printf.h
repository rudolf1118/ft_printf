#ifndef PRINTF_H
# define PRINTF_H
# include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
int print_str(char *str);
int print_adress (void *ad);
int	print_char(char c);
int print_hex(unsigned int n, char format);
int	print_int(int num);
int	print_decimal(int num);
int	print_ui(unsigned int n);
int	ft_printf(const char *input, ...);
#endif // end of PRINTF_H