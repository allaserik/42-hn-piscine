/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:21:07 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:06:21 by eallas           ###   ########.fr       */
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
 *  Function that transforms every letter to lowercase.
 */
char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/**
 * Main function for testing ft_strlowcase().
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[] = "Hello, World!";
// 	char	test2[] = "12345";

// 	printf("Test Case 1 Before: %s\n", test1);
// 	ft_strlowcase(test1);
// 	printf("Result: %s\n\n", test1);
// 	printf("Test Case 2 Before: %s\n", test2);
// 	ft_strlowcase(test2);
// 	printf("Result: %s\n\n", test2);
// 	return (0);
// }
