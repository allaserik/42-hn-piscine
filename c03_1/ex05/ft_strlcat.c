/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:45:17 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 11:55:10 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strlcat (man strlcat).
 * The strlcpy() and strlcat() functions copy and concatenate strings with
 * the same input parameters and output result as snprintf(3).
 * They are designed to be safer, more consistent, and less error prone
 * replacements for the easily misused functions strncpy(3) and strncat(3).
 * strlcpy() and strlcat() take the full size of the destination buffer and
 * guarantee NUL-termination if there is room.  Note that room for the NUL
 * should be included in dstsize.
 * strlcpy() copies up to dstsize - 1 characters from the string src to dst,
 * NUL-terminating the result if dstsize is not 0.
 * strlcat() appends string src to the end of dst. It will append at most
 * dstsize - strlen(dst) - 1 characters. It will then NUL-terminate,
 * unless dstsize is 0 or the original dst string was longer than dstsize
 * (in practice this should not happen as it means that either dstsize is
 * incorrect or that dst is not a proper string).
 * If the src and dst strings overlap, the behavior is undefined.
 *
 * Solution:
 * Calculate the length of the destination string
 * Calculate the length of the source string
 * Return the total length of the concatenated string
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	while (src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/**
 * Main for testing purposes
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char			str1[20] = "1337 ";
// 	char			str2[] = "42Born to code";
// 	unsigned int	result1;
// 	char			str3[10] = "";
// 	char			str4[] = "";
// 	unsigned int	result2;
// 	char			str5[10] = "";
// 	char			str6[] = "hello";
// 	unsigned int	result3;
// 	char			str7[10] = "1337 ";
// 	char			str8[] = "42Born to code";
// 	unsigned int	result4;
// 	char			str9[20] = "Test";
// 	char			str10[] = "Test";
// 	unsigned int	result5;

// 	// Test case 1: Concatenate two strings
// 	result1 = ft_strlcat(str1, str2, sizeof(str1));
// 	printf("[1] Concatenate two strings: Expected \"1337 42Born to code\" output \"%s\"\n",
// 		str1);
// 	printf("   Result: %s\n", str1);
// 	printf("   Length: %u\n", result1);
// 	// Test case 2: Concatenate empty strings
// 	result2 = ft_strlcat(str3, str4, sizeof(str3));
// 	printf("[2] Concatenate empty strings: Expected \"\" output \"%s\"\n",
// 		str3);
// 	printf("   Result: %s\n", str3);
// 	printf("   Length: %u\n", result2);
// 	// Test case 3: Append to an empty string
// 	result3 = ft_strlcat(str5, str6, sizeof(str5));
// 	printf("[3] Append to an empty string: Expected \"hello\" output \"%s\"\n",
// 		str5);
// 	printf("   Result: %s\n", str5);
// 	printf("   Length: %u\n", result3);
// 	// Test case 4: Concatenate with string larger than size
// 	result4 = ft_strlcat(str7, str8, 5);
// 	printf("[4] Concatenate with string larger than size: Expected \"1337 42\" output \"%s\"\n",
// 		str7);
// 	printf("   Result: %s\n", str7);
// 	printf("   Length: %u\n", result4);
// 	// Test case 5: Concatenate same strings with size larger than sum of their lengths
// 	result5 = ft_strlcat(str9, str10, sizeof(str9));
// 	printf("[5] Concatenate same strings with size larger than sum of their lengths: Expected \"TestTest\" output \"%s\"\n",
// 		str9);
// 	printf("   Result: %s\n", str9);
// 	printf("   Length: %u\n", result5);
// 	return (0);
// }
