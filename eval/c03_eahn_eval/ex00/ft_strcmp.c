/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:57:27 by eahn              #+#    #+#             */
/*   Updated: 2024/02/05 00:01:27 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "aaa";
// 	char	str2[] = "aaa";
// 	char	str3[] = "aac";
// 	char	str4[] = "aAa";

// 	printf("test 1 (str1 & str2): %d\n", ft_strcmp(str1, str2));
// 	printf("test 2 (str1 & str3): %d\n", ft_strcmp(str1, str3));
// 	printf("test 3 (str1 & str4): %d\n", ft_strcmp(str1, str4));
// }
