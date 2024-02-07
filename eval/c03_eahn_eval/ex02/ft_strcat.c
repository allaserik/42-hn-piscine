/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:46:42 by eahn              #+#    #+#             */
/*   Updated: 2024/01/27 20:16:30 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char dest1[15] = "Hello, ";
// 	char dest2[10] = "Hello, ";
// 	char src[] = "World!";
// 	printf("%s\n", ft_strcat(dest1, src));
// 	printf("%s\n", ft_strcat(dest2, src));
// }
