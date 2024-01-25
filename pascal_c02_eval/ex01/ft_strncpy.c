/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 22:36:19 by plefev            #+#    #+#             */
/*   Updated: 2024/01/22 18:19:32 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && ((unsigned int)i) < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (((unsigned int)i) < n)
	{
		dest[i] = '\0';
		printf("%s", dest);
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[10];

	src = "yeethhghfghfghfghgf";
	printf("%s", ft_strncpy(dest, src, 6));
}
