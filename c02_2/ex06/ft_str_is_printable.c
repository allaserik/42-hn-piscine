/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:11:34 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:06:11 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that returns 1 if the character is printable, 0 otherwise.
 */
int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/**
 * Function that returns 1 if the string given as a parameter contains only
 * printable characters, and 0 if it contains any other character.
 */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main function for testing ft_str_is_printable.
 */

// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "Printable123!@#";
// 	char	test2[] = "NonPrintable \\x01 \x01";
// 	char	test3[] = "   \t\n\r";
// 	char	test4[] = "";

// 	// Test case 1
// 	printf("Test Case 1: %s\nResult: %d\n\n", test1,
// 		ft_str_is_printable(test1));
// 	// Test case 2
// 	printf("Test Case 2: %s\nResult: %d\n\n", test2,
// 		ft_str_is_printable(test2));
// 	// Test case 3
// 	printf("Test Case 3: %s\nResult: %d\n\n", test3,
// 		ft_str_is_printable(test3));
// 	// Test case 4
// 	printf("Test Case 4: %s\nResult: %d\n\n", test4,
// 		ft_str_is_printable(test4));
// 	return (0);
// }
