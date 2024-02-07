/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:44:03 by eallas            #+#    #+#             */
/*   Updated: 2024/02/03 11:37:17 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/**
 * Reproduce the behavior of the function strstr (man strstr).
 * The strstr() function locates the first occurrence of the null-terminated
 * string needle in the null-terminated string haystack.
 * The strcasestr() function is similar to strstr(), but ignores the case
 * of both strings.
 * The strnstr() function locates the first occurrence of the null-terminated
 * string needle in the string haystack, where not more than len characters
 * are searched.  Characters that appear after a `\0' character are not
 * searched. Since the strnstr() function is a FreeBSD specific API, it
 * should only be used when portability is not a concern.
 *
 * While the strcasestr() function uses the current locale, the strcasestr_l()
 * function may be passed a locale directly.
 * See xlocale(3) for more information.
 *
 * RETURN VALUES
 *  If needle is an empty string, haystack is returned;
 * if needle occurs nowhere in haystack, NULL is returned;
 * otherwise a pointer to the first character of the first occurrence
 * of needle is returned.
 */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	while (str[i] != '\0')
	{
		start = i;
		j = 0;
		while (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[start]);
		i = start + 1;
	}
	return (NULL);
}

/**
 * Main function to test the function ft_strstr.
 */

// #include <stdio.h>

// int	main(void)
// {
// 	char *str;
// 	char *to_find;
// 	char *result;

// 	str = "Foo Bar Baz";
// 	to_find = "Bar";
// 	printf("Testing ft_strstr(%s, %s):\n", str, to_find);
// 	result = ft_strstr(str, to_find);

// 	if (result != NULL)
// 		printf("Needle found at position: %ld\n", result - str);
// 	else
// 		printf("Needle not found\n");

// 	return (0);
// }
