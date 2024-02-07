/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:45:07 by pamatya           #+#    #+#             */
/*   Updated: 2024/01/31 15:39:10 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*src;
// 	char	dest[50] = "yyyyyyyyyyyyy";
// 	char	dst[50] = "yyyyyyyyyyyyy";

// 	src = "Hello from the other side!";
// 	ft_strcpy(dest, src);
// 	strcpy(dst, src);
// 	printf("Source string =				%s\n", src);
// 	printf("Result from ft_strcpy: dest = 	%s\n", dest);
// 	printf("Result from strcpy: 	dst = 	%s\n", dst);
// 	return (0);
// }
