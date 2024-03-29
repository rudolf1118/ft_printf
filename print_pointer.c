/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:16:04 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/22 17:16:31 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned long long n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n /= 16;
	}
	return (count);
}

void	put_hex(unsigned long long n, char format)
{
	if (n >= 16)
	{
		put_hex(n / 16, format);
		put_hex(n % 16, format);
	}
	else if (n <= 9)
		ft_putchar_fd(n + '0', 1);
	else if (format == 'x')
		ft_putchar_fd((n + 39) + '0', 1);
	else if (format == 'X')
		ft_putchar_fd((n + 7) + '0', 1);
}

int	print_heximal(unsigned long long n, char format)
{
	put_hex(n, format);
	if (n == 0)
		return (hex_len(n) + 3);
	return (hex_len(n) + 2);
}

int	print_adress(void *ad)
{
	unsigned long long	result;

	result = (unsigned long long)ad;
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	return (print_heximal(result, 'x'));
}
