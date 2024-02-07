/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:10:32 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:04:50 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checks if a character is alpha.
 * If character is not alpha, returns 0.
 * Otherwise, returns 1.
 */
int	ft_char_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/**
 * Function that returns 1 if the string given as a parameter contains only
 * alphabetical characters, and 0 if it contains any other character.
 * It should return 1 if str is empty.
 *
 * Look for non-alphabetical characters in the string.
 * Return 0 if there are non-alphabetical characters in the string.
 * Return 1 if all characters are alphabetical or the string is empty
 */
int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
 * main function to test the function ft_str_is_alpha
 */

// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "HelloWorld";
// 	char	test2[] = "42School";
// 	char	test3[] = "Alphabetic123";
// 	char	test4[] = "";
// 	char	test5[] = "NonAlphabetic@!#";

// 	// Test cases
// 	// Test case 1
// 	printf("Test Case 1: %s\nResult: %d\n\n", test1, ft_str_is_alpha(test1));
// 	// Test case 2
// 	printf("Test Case 2: %s\nResult: %d\n\n", test2, ft_str_is_alpha(test2));
// 	// Test case 3
// 	printf("Test Case 3: %s\nResult: %d\n\n", test3, ft_str_is_alpha(test3));
// 	// Test case 4
// 	printf("Test Case 4: %s\nResult: %d\n\n", test4, ft_str_is_alpha(test4));
// 	// Test case 5
// 	printf("Test Case 5: %s\nResult: %d\n\n", test5, ft_str_is_alpha(test5));
// 	return (0);
// }
