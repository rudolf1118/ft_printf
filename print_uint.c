/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:17:24 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/22 17:17:36 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	counters(unsigned int num)
{
	unsigned int	counter;

	counter = 0;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

int	ten(int counter)
{
	unsigned int	ten;

	ten = 1;
	while (counter > 1)
	{
		ten *= 10;
		counter--;
	}
	return (ten);
}

int	print_ui(unsigned int n)
{
	int				len;
	int				num;
	int				tens;
	unsigned int	result;

	result = n;
	len = counters(n);
	tens = ten(len);
	if (n < 0)
		print_ui(4294967295 - n + 1);
	while (tens != 0)
	{
		num = n / tens;
		ft_putchar_fd(num + '0', 1);
		n = n - num * tens;
		tens /= 10;
	}
	if (result == 0)
		return (counters(result) + 1);
	return (counters(result));
}
