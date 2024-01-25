/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:31:56 by eallas            #+#    #+#             */
/*   Updated: 2024/01/23 13:14:03 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_putnbr.c
 *
 * This program displays the number entered as a parameter. The program
 * is able to display all possible values within an int type variable.
 */

#include <unistd.h>

/**
 * This function displays the number entered as a parameter. The function is
 * able to display all possible values within an int type variable.
 *
 * Example: ft_putnbr(42) displays "42"
 *
 * * The function takes an integer nb as a parameter and displays it on the
 * * standard output.
 *
 * * If nb is negative, it writes a '-' to the output and handles the special
 * * case when nb is equal to the minimum integer value (-2147483648).
 *
 * * In the special case, it writes the digit '2' to the output and adjusts nb
 * * to avoid issues with the minimum integer value.
 *
 * * It then converts the remaining positive value of nb to its individual
 * * digits using recursion.
 *
 * Each digit is converted to its ASCII character representation and written
 * to the output using the write function.
 */
void	ft_putnbr(int nb)
{
	char	digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

/**
 * The main function demonstrates the usage of ft_putnbr with various test
 * cases.
 */
// int	main(void)
// {
// 	write(1, "Start test: \n", 13);
// 	ft_putnbr(42);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647);
// 	write(1, "\n", 1);
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(-21);
// 	write(1, "\n", 1);
// 	write(1, "End test.\n", 10);
// 	return (0);
// }
