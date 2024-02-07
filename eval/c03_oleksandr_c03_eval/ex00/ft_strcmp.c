/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:02:31 by obrittne          #+#    #+#             */
/*   Updated: 2024/01/22 18:44:13 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (!*s1 && !*s2)
		{
			return (0);
		}
		if (*s1 > *s2)
		{
			return (1);
		}
		if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
	}
}

int	main(void)
{
	char	str1[] = "\0";
	char	str2[] = "aa";
	int		result;

	result = ft_strcmp(str1, str2);
	if (result < 0)
	{
		printf("%s is lexicographically less than %s\n", str1, str2);
	}
	else if (result > 0)
	{
		printf("%s is lexicographically greater than %s\n", str1, str2);
	}
	else
	{
		printf("%s is lexicographically equal to %s\n", str1, str2);
	}
	return (0);
}
