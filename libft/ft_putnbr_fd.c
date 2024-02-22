/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:11:28 by rharutyu          #+#    #+#             */
/*   Updated: 2024/02/01 16:11:30 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	count(int num)
{
	int	counter;

	counter = 0;
	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return (counter);
}

int	tens(int counter)
{
	int	ten;

	ten = 1;
	while (counter > 1)
	{
		ten *= 10;
		counter--;
	}
	return (ten);
}

int	checker(int n, int fd)
{
	n = 147483648;
	ft_putchar_fd('-', fd);
	ft_putchar_fd('2', fd);
	return (n);
}

int	resulter(int result)
{
	if (result < 0 || result == 0)
		return (count((result * -1)) + 1);
	return (count(result));
}

int	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		num;
	int		ten;
	int		result;
	char	res;

	result = n;
	if (n == -2147483648)
		n = checker(n, fd);
	else if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	len = count(n);
	ten = tens(len);
	while (ten != 0)
	{
		num = n / ten;
		res = num + '0';
		ft_putchar_fd(res, fd);
		n = n - num * ten;
		ten /= 10;
	}
	return (resulter(result));
}
