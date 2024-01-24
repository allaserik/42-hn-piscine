/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefev <plefev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:30:33 by plefev            #+#    #+#             */
/*   Updated: 2024/01/21 15:56:21 by plefev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase_char(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_uppercase_char(str[i]))
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
// 	char *test1;
// 	char *test2;
// 	char *test3;
// 	char *test4;

// 	test1 = "";
// 	test2 = "REEEEEEEEEE";
// 	test3 = "PEPE_RAGE";
// 	test4 = "pepe3";
// 	printf("%s: %d\n", test1, ft_str_is_uppercase(test1));
// 	printf("%s: %d\n", test2, ft_str_is_uppercase(test2));
// 	printf("%s: %d\n", test3, ft_str_is_uppercase(test3));
// 	printf("%s: %d\n", test4, ft_str_is_uppercase(test4));
// }