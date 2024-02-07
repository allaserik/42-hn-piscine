/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:58:52 by eahn              #+#    #+#             */
/*   Updated: 2024/02/05 14:27:42 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = 0;
	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     char destination[20] = "Hello";
//     char source[] = "Wooooorld";
//     unsigned int result;

//     result = ft_strlcat(destination, source, 10);
//     printf("Source String: %s\n", source);
// 	printf("Destination String: %s\n", destination);
// 	printf("Return: %u\n", result);
// 	return (0);
// }