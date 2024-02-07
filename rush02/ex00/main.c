/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:20:13 by eallas            #+#    #+#             */
/*   Updated: 2024/02/03 16:21:19 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#define DEFAULT_DICTIONARY_PATH "numbers.dict"

/**
 * Program that takes a number as argument and converts it to its written
 * letters value.
 *
 * Your program can take up to 2 arguments:
 * ◦ If there is only one argument, it is the value you need to convert
 * ◦ If there are two arguments, the first argument is the new reference
 * dictionary and the second argument is the value you need to convert.
 * ◦ If the argument isn’t a positive number, your program must return "Error",
 * followed by a newline.
 */
int	main(int argc, char *argv[])
{
	char	*dictionaryPath;
	char	*numberToConvert;
	t_entry	*dictionary;

	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	dictionaryPath = NULL;
	numberToConvert = NULL;
	// Check the number of arguments
	if (argc == 2)
	{
		// Case 1: Only the number to convert
		// Default dictionary path
		dictionaryPath = DEFAULT_DICTIONARY_PATH;
		dictionary = parse_dictionary(dictionaryPath);
		if (!dictionary)
		{
			write(2, "Dict Error\n", 12);
			free_dictionary(dictionary); // Free dictionary in case of an error
			return (1);
		}
		// validate if argument is a number
		ft_validate_number(argv[1]);
		numberToConvert = argv[1];
	}
	else
	{
		// Case 2: Reference dictionary and the number to convert
		// how to validate the path?
		dictionaryPath = argv[1];
		dictionary = parse_dictionary(dictionaryPath);
		if (!dictionary)
		{
			write(2, "Dict Error\n", 12);
			free_dictionary(dictionary); // Free dictionary in case of an error
			return (1);
		}
		// validate if the argument is a number
		ft_validate_number(argv[2]);
		numberToConvert = argv[2];
	}
	// Proceed with dictionary parsing and number conversion
	// Free the allocated memory
	free_dictionary(dictionary);
	return (0);
}
