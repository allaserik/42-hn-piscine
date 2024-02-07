/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:11:37 by pamatya           #+#    #+#             */
/*   Updated: 2024/02/05 17:16:20 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i ++;
			}
		}
		i ++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char			*src;
// 	char			*pdest;
// 	unsigned int	n;
// 	char			dest_c[] = "I a";
// 	int				l;

// 	src = "3cheese!";
// 	n = 5;
// 	printf("Original string =				%s\n", src);

// 	// pdest = &dest_c[0];
// 	// strncpy(pdest, src, n);
// 	// printf("Result from strncpy: 	dest = 	%s\n", pdest);

// 	pdest = &dest_c[0];
// 	ft_strncpy(pdest, src, n);
// 	printf("Result from ft_strncpy: dest = 	%s\n", pdest);

// 	l = strlen(pdest);
// 	printf("New length of destination is: %d\n", l);
// 	return (0);
// }
