/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:42:31 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 15:22:24 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strcat (man strcat).
 * The strcat() and strncat() functions append a copy of the null-terminated
 * string s2 to the end of the null-terminated string s1,
 * then add a terminating `\0'.
 * The string s1 must have sufficient space to hold the result.
 * The strncat() function appends not more than n characters from s2,
 * and then adds a terminating `\0'.
 * The source and destination strings should not overlap,
 * as the behavior is undefined.
 * RETURN VALUES
 * The strcat() and strncat() functions return the pointer s1.
 */
char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	j;

	dest_len = 0;
	j = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[j] != '\0')
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

/**
 * Main function to test the ft_strcat function.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[20] = "Hello";
// 	char	str2[] = " World";
// 	char	str3[20] = "123";
// 	char	str4[] = "45";

// 	// Test 1: Concatenate strings
// 	ft_strcat(str1, str2);
// 	printf("Test 1: ft_strcat(\"Hello\", \" World\") = %s\n", str1);
// 	// Test 2: Concatenate strings with numbers
// 	ft_strcat(str3, str4);
// 	printf("Test 2: ft_strcat(\"123\", \"45\") = %s\n", str3);
// 	return (0);
// }
