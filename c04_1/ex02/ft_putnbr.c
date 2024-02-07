/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:14:39 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 14:44:11 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that displays a character on the standard output.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * Function that displays the number entered as a parameter. The function
 * has to be able to display all possible values within an int type variable.
 */
void	ft_putnbr(int nb)
{
	if (nb < -2147483647)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

/**
 * Main function for testing ft_putnbr.
 * 4 byte int -2,147,483,648 to 2,147,483,647
 */
// int	main(void)
// {
// 	ft_putnbr(0);
// 	ft_putchar('\n');
// 	ft_putnbr(-1);
// 	ft_putchar('\n');
// 	ft_putnbr(123456789);
// 	ft_putchar('\n');
// 	ft_putnbr(-123456789);
// 	ft_putchar('\n');
// 	ft_putnbr(1234567890);
// 	ft_putchar('\n');
// 	ft_putnbr(-1234567890);
// 	ft_putchar('\n');
// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');
// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');
// }
