/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:13:30 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/22 17:13:31 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);
int	print_adress(void *ad);
int	print_char(char c);
int	print_hex(unsigned int n, char format);
int	print_int(int num);
int	print_decimal(int num);
int	print_ui(unsigned int n);
int	print_str(char *str);
#endif // end of FT_PRINTF_H
