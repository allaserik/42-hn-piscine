/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:09:35 by eallas            #+#    #+#             */
/*   Updated: 2024/02/06 13:48:19 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(char *src);

/**
	* Function allocates sufficient memory for a copy of the string s1,
	* does the copy,
		and returns a pointer to it. The pointer may subsequently
	* be used as an argument to the function free(3).
	* If insufficient memory is available, NULL is returned
	* and errno is set to ENOMEM
	*/
char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest - len);
}

/**
 * Function computes the length of the string.
 */
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/**
 * Main function to test ft_strdup() function.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	*dup_str;
// 	char	*src;
// 	char	*test_strings[] = {"", "test",
// 			"abcdefghijklmnopqrstuvwxyzABCDEFGHQRSTUVWXYZ1234567890!@#$%^&*()",
// 			"string with \0 null character"};

// 	for (int i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); i++)
// 	{
// 		src = test_strings[i];
// 		dup_str = ft_strdup(src);
// 		if (dup_str == NULL)
// 		{
// 			printf("Memory allocation failed for string \"%s\"\n", src);
// 			continue ;
// 		}
// 		printf("Original string: \"%s\"\n", src);
// 		printf("Duplicated string: \"%s\"\n", dup_str);
// 		free(dup_str);
// 	}
// 	return (0);
// }
