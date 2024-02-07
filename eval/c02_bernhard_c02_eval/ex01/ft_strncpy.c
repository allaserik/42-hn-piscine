/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beschrod <beschrod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:59:17 by beschrod          #+#    #+#             */
/*   Updated: 2024/01/22 13:43:26 by beschrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != 0 && index < n)
	{
		dest[index] = src[index];
		++index;
	}
	while (index < n)
	{
		dest[index] = 0;
		++index;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	test[] = "012345";
// 	char	test2[11];

// 	ft_strncpy(test2, test, 6);
// 	printf("%s", test2);
// }
