/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdieterl <wdieterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:10:58 by wdieterl          #+#    #+#             */
/*   Updated: 2024/02/07 10:11:24 by wdieterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*start;

	dup = (char *)malloc(ft_strlen(src) + 1);
	if (src == 0)
		return (0);
	start = dup;
	while (*src)
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = '\0';
	return (start);
}

/* int	main(void)
{
	char	str[] = "Hello World";
	printf("Original = %s\n", str);
	printf("Duplikat = %s\n", ft_strdup(str));
	return 0;
}
 */
