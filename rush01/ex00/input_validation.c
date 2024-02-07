/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:33:49 by eallas            #+#    #+#             */
/*   Updated: 2024/01/27 19:22:47 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This program validates the input given by the user in
 * int	main(int argc, char *argv[])
 *
 * Input format:
 * ./rush-01 "col1up col2up col3up col4up col1down col2down col3down
 * col4down row1left row2left row3left row4left row1right row2right
 * row3right row4right"
 *
 * Example input:
 * ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
 *
 * argc is the number of arguments given by the user. It has to be 16.
 * argv[0] is the name of the program
 * argv[1 ... argc] is the input numbers for the board.
 */
#include "input_validation.h"
#include <unistd.h>

void	write_error(char *str);
size_t	ft_strlen(const char *str);

// Validate the input given by the user.
// There need to be 2 arguments given.
// The second input argument has to be a string of 16 integers between 1 to 4.
// If not then print error message and exit.
// Check for the correct length and presence of quotation marks
// Check the range of numbers if the number is between 1 and 4.

int	is_argument_count_valid(int argc)
{
	if (argc != 2)
	{
		write_error("Error: Invalid input. Need to input 1 argument.\n");
		return (0);
	}
	return (1);
}

int	is_input_length_valid(const char *input_string)
{
	size_t	input_length;

	input_length = ft_strlen(input_string);
	if (input_length != 31)
	{
		write_error("Error: Invalid argument. Should have 16 numbers 1-4.\n");
		return (0);
	}
	return (1);
}

int	is_quotation_mark_valid(const char *input_string)
{
	return (input_string[0] == '"' && input_string[30] == '"');
}

int	is_number_range_valid(const char *input_string)
{
	size_t	i;

	i = 0;
	while (i < 30)
	{
		if (input_string[i] < '1' || input_string[i] > '4')
		{
			write_error("Error: Invalid numbers. Numbers have to be 1..4\n");
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	is_input_valid(int argc, char **argv)
{
	char	*input_string;

	if (!is_argument_count_valid(argc))
		return (0);
	input_string = argv[1];
	if (!is_input_length_valid(input_string))
		return (0);
	if (!is_number_range_valid(input_string))
		return (0);
	return (1);
}
