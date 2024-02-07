/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:11:28 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:06:06 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checks if a character is uppercase.
 */
int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/**
 * function that returns 1 if the string given as a parameter contains only
 * uppercase alphabetical characters, and 0 if it contains any other character.
 * if a character in the string is not uppercase, the function returns 0.
 * otherwise, the function returns 1.
 */
int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main function fot testing the function ft_str_is_uppercase.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "UPPERCASE";
// 	char	test2[] = "MixedCase";
// 	char	test3[] = "12345";
// 	char	test4[] = "";
// 	char	test5[] = "nonuppercase";

// 	// Test cases
// 	// Test case 1
// 	printf("Test Case 1: %s\nResult: %d\n\n", test1,
// 		ft_str_is_uppercase(test1));
// 	// Test case 2
// 	printf("Test Case 2: %s\nResult: %d\n\n", test2,
// 		ft_str_is_uppercase(test2));
// 	// Test case 3
// 	printf("Test Case 3: %s\nResult: %d\n\n", test3,
// 		ft_str_is_uppercase(test3));
// 	// Test case 4
// 	printf("Test Case 4: %s\nResult: %d\n\n", test4,
// 		ft_str_is_uppercase(test4));
// 	// Test case 5
// 	printf("Test Case 5: %s\nResult: %d\n\n", test5,
// 		ft_str_is_uppercase(test5));
// 	return (0);
// }
