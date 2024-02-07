/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:01:06 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:07:41 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strlcpy (man strlcpy).
 * Copies up to size - 1 characters from src to dest.
 * Ensures dest is null-terminated.
 * Counts the length of src
 * Returns the length of src.
 */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	src_length = 0;
	while (src[src_length] != '\0')
		src_length++;
	return (src_length);
}

/**
 * main function for testing ft_strlcpy.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char			dest[20];
// 	const char		src[] = "Hello, World!";
// 	unsigned int	length;

// 	printf("Source: %s\n", src);
// 	printf("Original Destination: %s\n", dest);
// 	length = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Result Destination: %s\n", dest);
// 	printf("Length of Source: %u\n", length);
// 	return (0);
// }
