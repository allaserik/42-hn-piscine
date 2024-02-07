/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beschrod <beschrod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:59:17 by beschrod          #+#    #+#             */
/*   Updated: 2024/01/22 16:12:03 by beschrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	if (size == 0)
	{
		return (0);
	}
	index = 0;
	while (src[index] != 0 && index < size)
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = 0;
	return (index);
}

// int	main(void)
// {
//     char test[] = "12345";
//     char test2[6];
//     ft_strlcpy(test2, test, 10);
//     printf("%s", test2);
// }
