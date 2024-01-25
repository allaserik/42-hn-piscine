/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beschrod <beschrod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:53:49 by beschrod          #+#    #+#             */
/*   Updated: 2024/01/21 16:55:28 by beschrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != 0)
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = 0;
	return (dest);
}

// int	main(void)
// {

// 	char	test1[] = "0123456789";
// 	char	test2[11];

// 	ft_strcpy(test2, test1);

//     printf("%s", test2);
// 	return (0);
// }
