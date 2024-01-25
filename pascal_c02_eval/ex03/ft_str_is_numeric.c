/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefev <plefev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 00:03:44 by plefev            #+#    #+#             */
/*   Updated: 2024/01/22 16:37:40 by plefev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num_char(char c)
{
	return ((c >= '0' && c <= '9'));
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_num_char(str[i]))
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

// 	test1 = "";
// 	test2 = "0912347";
// 	test3 = "91237yeet0128";
// 	printf("%s: %d\n", test1, ft_str_is_numeric(test1));
// 	printf("%s: %d\n", test2, ft_str_is_numeric(test2));
// 	printf("%s: %d\n", test3, ft_str_is_numeric(test3));
// }
