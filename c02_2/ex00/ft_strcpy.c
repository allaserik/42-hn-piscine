/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:08:54 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:05:19 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strcpy (man strcpy).
 * Copy characters from source to destination until null terminator
 * is encountered
 * Return the original destination pointer
 */
char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * Main for testing the function ft_strcpy.
 */

// #include <stdio.h>

// int	main(void)
// {
// 	char	source1[] = "Hello, World!";
// 	char	destination1[50];
// 	char	source2[] = "42 School";
// 	char	destination2[50];
// 	char	source3[] = "";
// 	char	destination3[50];

// 	// Test cases
// 	// Test case 1
// 	ft_strcpy(destination1, source1);
// 	printf("Test Case 1:\nSource: %s\nDestination: %s\n\n", source1,
// 		destination1);
// 	// Test case 2
// 	ft_strcpy(destination2, source2);
// 	printf("Test Case 2:\nSource: %s\nDestination: %s\n\n", source2,
// 		destination2);
// 	// Test case 3
// 	ft_strcpy(destination3, source3);
// 	printf("Test Case 3:\nSource: %s\nDestination: %s\n\n", source3,
// 		destination3);
// 	return (0);
// }
