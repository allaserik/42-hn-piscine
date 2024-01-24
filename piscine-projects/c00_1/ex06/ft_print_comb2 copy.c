/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2 copy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:21:44 by eallas            #+#    #+#             */
/*   Updated: 2024/01/23 13:05:23 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_print_comb2.c
**
** Description:
** This program displays all different combinations of two two-digit numbers
** (XX XX) between 00 and 99, listed in ascending order.
**
** Expected output:
** $>./a.out | cat -e
** 00 01, 00 02, 00 03, 00 04, ..., 00 99, 01 02, ..., 97 99, 98 99$>
*/

#include <unistd.h>

/**
 * Function that prints the characters in the parameter list.
 * Add comma and space if not the last combination
 */
void	ft_write_chars(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

/**
 * Function that displays all different combination of two two digits numbers
 * (XX XX) between 00 and 99, listed by ascending order.
 *
 * Outer Loop (first_digit): This loop iterates over the first digit from
 * '0' to '9'. It represents the tens place of the first two-digit number.
 *
 * Second Loop (second_digit): This loop iterates over the second digit from
 * '0' to '9'. It represents the units place of the first two-digit number.
 *
 * Third Loop (third_digit): This loop also iterates over the third digit from
 * first_digit to '9'. It represents the tens place of the second two-digit
 * number.
 *
 * Fourth Loop (fourth_digit): This loop iterates over the fourth digit from
 * '0' to '9'. It represents the units place of the second two-digit number.
 * The condition ensures that when third_digit is equal to first_digit,
 * fourth_digit starts from second_digit + 1 to avoid repetitions.
 * Otherwise, it starts from '0'.
 * This helps in generating distinct combinations of two two-digit numbers.
 */
void	ft_print_comb2(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;
	char	fourth_digit;

	first_digit = '0';
	while (first_digit <= '9')
	{
		second_digit = '0';
		while (second_digit <= '9')
		{
			third_digit = first_digit;
			while (third_digit <= '9')
			{
				if (third_digit == first_digit)
				{
					fourth_digit = second_digit + 1;
				}
				else
				{
					fourth_digit = '0';
				}
				while (fourth_digit <= '9')
				{
					ft_write_chars(first_digit, second_digit, third_digit,
						fourth_digit);
					++fourth_digit;
				}
				++third_digit;
			}
			++second_digit;
		}
		++first_digit;
	}
}

/**
 * Main function.
 */
int	main(void)
{
	ft_print_comb2();
	return (0);
}
