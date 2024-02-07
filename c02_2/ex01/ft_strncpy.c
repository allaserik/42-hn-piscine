/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:09:22 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:05:12 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strncpy (man strncpy).
 * Copy at most 'n' characters from source to destination
 * If 'n' is greater than the length of the source string,
 * pad with null characters
 * Return the original destination pointer
 */
char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * Main for testing the function ft_strncpy.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	source1[] = "Hello, World!";
// 	char	destination1[50];
// 	char	source2[] = "42 School";
// 	char	destination2[50];
// 	char	source3[] = "Testing";
// 	char	destination3[50];

// 	// Test cases
// 	// Test case 1
// 	ft_strncpy(destination1, source1, 7);
// 	printf("Test Case 1:\nSource: %s\nDestination: %s\n\n", source1,
// 		destination1);
// 	// Test case 2
// 	ft_strncpy(destination2, source2, 5);
// 	printf("Test Case 2:\nSource: %s\nDestination: %s\n\n", source2,
// 		destination2);
// 	// Test case 3
// 	ft_strncpy(destination3, source3, 10);
// 	printf("Test Case 3:\nSource: %s\nDestination: %s\n\n", source3,
// 		destination3);
// 	return (0);
// }
