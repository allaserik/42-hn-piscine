/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:09:59 by etekeli           #+#    #+#             */
/*   Updated: 2024/02/05 14:02:38 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// int	main(void)
// {

// 	char	src[] = "Hello";
// 	char	dest[] = "worfd1xxx";

// 	printf("%s", ft_strncpy(dest, src, 1) );
// 	printf("\n%s", strncpy(dest, src,1) );

// 	return (0);
// }
