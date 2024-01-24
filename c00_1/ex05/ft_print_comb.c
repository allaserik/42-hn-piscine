/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:51:09 by eallas            #+#    #+#             */
/*   Updated: 2024/01/23 11:29:42 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that prints the characters in the parameter list.
 */
void	ft_write_chars(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

/**
 * Function that displays all different combinations of three different digits
 * in ascending order, listed by ascending order - yes, repetition is voluntary.
 *
 * Intended output :
 * * $>./a.out | cat -e
 * * 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
 *
 * 987 isn’t there because 789 already is.
 * 789 is also the last combination of three different digits.
 * 999 isn’t there because the digit 9 is present more than once.
 */
void	ft_print_comb(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = '0';
	while (first_digit <= '9')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '9')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				ft_write_chars(first_digit, second_digit, third_digit);
				if (!(first_digit == '7' && second_digit == '8'
						&& third_digit == '9'))
				{
					write(1, ", ", 2);
				}
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
}

/**
 * Main function.
 */
// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
