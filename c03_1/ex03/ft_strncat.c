/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:43:16 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 15:28:52 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strncat (man strncat).
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
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	j;

	dest_len = 0;
	j = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[j] != '\0' && j < nb)
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

/**
 * main function to test the ft_strncat function
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char			dest[20] = "Hello, ";
// 	char			*src;
// 	unsigned int	nb;

// 	src = "world!";
// 	nb = 3;
// 	printf("Testing ft_strncat(\"%s\", \"%s\", \"%u\")\n", dest, src, nb);
// 	ft_strncat(dest, src, nb);
// 	printf("After ft_strncat: %s\n", dest);
// 	return (0);
// }
