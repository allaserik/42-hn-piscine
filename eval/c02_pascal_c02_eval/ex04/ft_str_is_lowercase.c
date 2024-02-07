/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefev <plefev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:08:27 by plefev            #+#    #+#             */
/*   Updated: 2024/01/21 14:27:29 by plefev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase_char(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_lowercase_char(str[i]))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	char	*test3;
// 	char	*test4;

// 	test1 = "";
// 	test2 = "Pepelaugh";
// 	test3 = "peperage1";
// 	test4 = "smollpepehands";
// 	printf("%s: %d\n", test1, ft_str_is_lowercase(test1));
// 	printf("%s: %d\n", test2, ft_str_is_lowercase(test2));
// 	printf("%s: %d\n", test3, ft_str_is_lowercase(test3));
// 	printf("%s: %d\n", test4, ft_str_is_lowercase(test4));
// }
