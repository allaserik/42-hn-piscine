/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanthir <imanthir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:12:57 by imanthir          #+#    #+#             */
/*   Updated: 2024/02/07 10:56:53 by imanthir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	total_len;

	j = strlen(dest);
	i = strlen(src);
	total_len = j + i;
	if (size <= j)
	{
		return (size + i);
	}
	if (i < size - j)
	{
		strcat(dest, src);
	}
	else
	{
		strncat(dest, src, size - j - 1);
		total_len = size - 1;
	}
	return (total_len);
}

// int	main(void)
// {
// 	char			dest[20] = "Hello";
// 	char			src[] = " World!";
// 	unsigned int	size;
// 	unsigned int	result;

// 	size = sizeof(dest);
// 	result = ft_strlcat(dest, src, size);
// 	printf("Concatenated string: %s\n", dest);
// 	printf("Total length: %u\n", result);
// 	return (0);
// }
