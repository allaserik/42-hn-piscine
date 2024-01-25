/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:16:30 by eallas            #+#    #+#             */
/*   Updated: 2024/01/24 15:49:22 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_print_combn.c
 *
 * The program displays all different combinations of n numbers by ascending
 * order.
 *
 * n will be so that : 0 < n < 10.
 *
 * If n = 2, here’s the expected output :
 * 01, 02, 03, ..., 09, 12, ..., 79, 89
 */

#include <unistd.h>

/**
 * Function that displays the characters passed as parameters.
 * Special condition for single-digit numbers
 */

void	ft_write_digits(int *arr, int num_digits)
{
	int		i;
	char	digit_char;

	i = 0;
	while (i < num_digits)
	{
		digit_char = '0' + arr[i];
		write(1, &digit_char, 1);
		i++;
	}
	write(1, ", ", 2);
}

/**
 * Recursive helper function to generate combinations.
 */
void	ft_generate_combinations(int remaining_digits, int start_digit,
		int *current_combination, int total_digits)
{
	int	current_digit;

	if (remaining_digits == 0)
	{
		ft_write_digits(current_combination, total_digits);
		return ;
	}
	current_digit = start_digit;
	while (current_digit <= 9)
	{
		current_combination[total_digits - remaining_digits] = current_digit;
		ft_generate_combinations(remaining_digits - 1, current_digit + 1,
			current_combination, total_digits);
		current_digit++;
	}
}

/**
 * Function that displays all different combinations of n numbers by ascending
 * order.
 *
 * Solved recursively.
 */
void	ft_print_combn(int n)
{
	int	current_combination[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_generate_combinations(n, 0, current_combination, n);
	write(1, "\n", 1);
}

/**
 * Main function for testing.
 */
int	main(void)
{
	write(1, "Start test: \n", 13);
	// ft_print_combn(2);
	// write(1, "\n", 1);
	// ft_print_combn(3);
	// write(1, "\n", 1);
	ft_print_combn(9);
	write(1, "\n", 1);
	write(1, "End test.\n", 10);
	return (0);
}
