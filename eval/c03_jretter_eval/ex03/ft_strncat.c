/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jretter <jretter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:31:26 by jretter           #+#    #+#             */
/*   Updated: 2024/02/05 11:37:03 by jretter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	src[] = "jochen";
//	char	dest[50] = "_retter_";
//	char	src1[] = "jochen";
//	char	dest1[50] = "_retter_";

//	printf("eigen %s\n", ft_strncat(dest, src, 4));
//	printf("bibliothek %s\n", strncat(dest1, src1, 4));
//	return (0);
//}