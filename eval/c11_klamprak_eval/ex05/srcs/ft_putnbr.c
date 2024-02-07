/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:27:31 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 10:49:28 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	count_digits(int nb)
{
	int		number_of_digits;

	number_of_digits = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		number_of_digits++;
	}
	return (number_of_digits);
}

int	find_div(int number_of_digits)
{
	int	div;

	div = 1;
	while (number_of_digits > 1)
	{
		div = div * 10;
		number_of_digits--;
	}
	return (div);
}

void	print_positive(int nb)
{
	char	a;
	int		number_of_digits;
	int		div;

	number_of_digits = count_digits(nb);
	div = find_div(number_of_digits);
	while (number_of_digits > 0)
	{
		a = nb / div;
		nb = nb % div;
		div = div / 10;
		a = 48 + a;
		write(1, &a, 1);
		number_of_digits--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb == 0)
	{
		ft_putstr("0");
		return ;
	}
	if (nb < 0)
	{
		ft_putstr("-");
		nb = -nb;
	}
	print_positive(nb);
}
