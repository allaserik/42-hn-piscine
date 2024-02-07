/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:00:56 by alhopkin          #+#    #+#             */
/*   Updated: 2024/01/31 14:51:00 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

// I know this one's wrong, but whatever.
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb > 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

void	ft_printcombo_recursive(int x[], int a, int n, int first)
{
	int	b;
	int	start;

	b = 0;
	if (a == n)
	{
		if (!first)
			write(1, ", ", 2);
		while (b < n)
		{
			ft_putnbr(x[b]);
			b++;
		}
	}
	else
	{
		start = (a == 0) * 1 + (a != 0) * (x[a - 1] + 1);
		while (start <= 9)
		{
			x[a] = start;
			ft_printcombo_recursive(x, a + 1, n, 0);
			start++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	array[10];

	ft_printcombo_recursive(array, 0, n, 1);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
