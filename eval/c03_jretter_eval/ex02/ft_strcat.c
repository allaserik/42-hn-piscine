/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jretter <jretter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:42:03 by jretter           #+#    #+#             */
/*   Updated: 2024/02/07 10:00:21 by jretter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	src[] = "jochen";
//	char	dest[50] = "_retter_";
//	char	src1[] = "jochen";
//	char	dest1[50] = "_retter_";
//	printf("eigen %s\n", ft_strcat(dest,src));
//	printf("bibliothek %s\n", strcat(dest1, src1));
//	return (0);
//}