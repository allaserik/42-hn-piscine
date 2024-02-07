/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:10:45 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:05:45 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checks if a character is a number.
 * Checks if a character is not a number then returns 0.
 * Otherwise returns 1.
 */
int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * Function that checks if a string is a number.
 * Checks if a character in the string is not numeric, then returns 0.
 * Otherwise returns 1.
 */
int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main function for testing ft_str_is_numeric.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "12345";
// 	char	test2[] = "42School";
// 	char	test3[] = "Numeric123";
// 	char	test4[] = "";
// 	char	test5[] = "NonNumeric@!#";

// 	// Test cases
// 	// Test case 1
// 	printf("Test Case 1: %s\nResult: %d\n\n", test1, ft_str_is_numeric(test1));
// 	// Test case 2
// 	printf("Test Case 2: %s\nResult: %d\n\n", test2, ft_str_is_numeric(test2));
// 	// Test case 3
// 	printf("Test Case 3: %s\nResult: %d\n\n", test3, ft_str_is_numeric(test3));
// 	// Test case 4
// 	printf("Test Case 4: %s\nResult: %d\n\n", test4, ft_str_is_numeric(test4));
// 	// Test case 5
// 	printf("Test Case 5: %s\nResult: %d\n\n", test5, ft_str_is_numeric(test5));
// 	return (0);
// }
