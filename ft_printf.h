#ifndef PRINTF_H
# define PRINTF_H
# include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
int	ft_printf(const char *input, ...);
int print_adress(void *ad);
int	print_char(char c);
int print_hex(unsigned int n, char format);
int	print_int(int num);
int	print_decimal(int num);
int	print_ui(unsigned int n);
int print_str(char *str);
#endif // end of PRINTF_H