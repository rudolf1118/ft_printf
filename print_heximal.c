/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_heximal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:14:48 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/22 17:14:49 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_length(unsigned int n)
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

void	put_heximal(unsigned int n, char format)
{
	if (n >= 16)
	{
		put_heximal(n / 16, format);
		put_heximal(n % 16, format);
	}
	else if (n <= 9)
		ft_putchar_fd(n + '0', 1);
	else if (format == 'x')
		ft_putchar_fd((n + 39) + '0', 1);
	else if (format == 'X')
		ft_putchar_fd((n + 7) + '0', 1);
}

int	print_hex(unsigned int n, char format)
{
	put_heximal(n, format);
	if (n == 0)
		return (hex_length(n) + 1);
	return (hex_length(n));
}
