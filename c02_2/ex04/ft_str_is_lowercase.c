/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:11:04 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:05:59 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checks if a character is lowercase.
 */
int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * Function that checks if a string is lowercase.
 * Find a character that is not lowercase in the string. Then return 0.
 * Otherwise return 1.
 */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main function for testing ft_str_is_lowercase.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "lowercase";
// 	char	test2[] = "MixedCase";
// 	char	test3[] = "12345";
// 	char	test4[] = "";
// 	char	test5[] = "NONLOWERCASE";

// 	// Test cases
// 	// Test case 1
// 	printf("Test Case 1: %s\nResult: %d\n\n", test1,
// 		ft_str_is_lowercase(test1));
// 	// Test case 2
// 	printf("Test Case 2: %s\nResult: %d\n\n", test2,
// 		ft_str_is_lowercase(test2));
// 	// Test case 3
// 	printf("Test Case 3: %s\nResult: %d\n\n", test3,
// 		ft_str_is_lowercase(test3));
// 	// Test case 4
// 	printf("Test Case 4: %s\nResult: %d\n\n", test4,
// 		ft_str_is_lowercase(test4));
// 	// Test case 5
// 	printf("Test Case 5: %s\nResult: %d\n\n", test5,
// 		ft_str_is_lowercase(test5));
// 	return (0);
// }
