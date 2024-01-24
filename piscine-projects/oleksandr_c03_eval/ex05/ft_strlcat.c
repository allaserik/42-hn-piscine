/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:08:02 by obrittne          #+#    #+#             */
/*   Updated: 2024/01/22 19:02:16 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*copy;
	unsigned int	current;

	copy = dest;
	current = 0;
	while (*copy)
	{
		copy++;
		current++;
		size--;
	}
	while (*src)
	{
		if (size > 1)
		{
			size--;
			*copy = *src;
			copy++;
		}
		src++;
		current++;
	}
	*copy = '\0';
	return (current);
}

int	main(void)
{
	char	dest1[100] = "Hello";
	char	*src1;
	size_t	result1;

	src1 = " World";
	printf("Source input: %s\n", src1);
	printf("Destination in the beginning: %s\n", dest1);
	result1 = ft_strlcat(dest1, src1, sizeof(dest1));
	printf("Result: %zu\n", result1);
	printf("Concatenated String in destination: %s\n\n", dest1);
	return (0);
}
