/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:41:47 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 11:47:11 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strncmp (man strncmp).
 * strcmp() and strncmp() functions lexicographically compare the
 * null-terminated strings s1 and s2.
 * The strncmp() function compares not more than n characters.
 * If the loop terminated because i == n, return 0.
 * Because strncmp() is designed for comparing strings rather than binary data,
 * characters that appear after a `\0' character are not compared.
 * Return an integer greater than, equal to, or less than 0,
 * according as the string s1 is greater than, equal to, or less than the
 * string s2.
 * The comparison is done using unsigned characters,
 * so that `\200' is greater than `\0'.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/**
 * Main function for testing ft_strcmp().
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hello";
// 	char	str3[] = "World";
// 	char	str4[] = "Hell";
// 	int		result1;
// 	int		result2;
// 	int		result3;

// 	// Test cases
// 	// Test 1: Equal strings
// 	result1 = ft_strncmp(str1, str2, 5);
// 	printf("Test 1: ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str1, str2, result1);
// 	// Test 2: Different strings
// 	result2 = ft_strncmp(str1, str3, 5);
// 	printf("Test 2: ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str1, str3, result2);
// 	// Test 3: Different strings with different lengths
// 	result3 = ft_strncmp(str1, str4, 5);
// 	printf("Test 3: ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str1, str4, result3);
// 	return (0);
// }
