/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:16:21 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:06:16 by eallas           ###   ########.fr       */
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
 *  Function that transforms every letter to uppercase.
 */
char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/**
 * main function for testing ft_strupcase.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "Hello, World!";

// 	// Test cases
// 	char test2[] = "12345"; // No alphabetic characters
// 	// Test case 1
// 	printf("Test Case 1 Before: %s\n", test1);
// 	ft_strupcase(test1);
// 	printf("Result: %s\n\n", test1);
// 	// Test case 2
// 	printf("Test Case 2 Before: %s\n", test2);
// 	ft_strupcase(test2);
// 	printf("Result: %s\n\n", test2);
// 	return (0);
// }
