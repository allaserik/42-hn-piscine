/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefev <plefev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:45:01 by plefev            #+#    #+#             */
/*   Updated: 2024/01/21 00:02:58 by plefev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alp_character(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_alp_character(str[i]))
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
// 	test2 = "yeet";
// 	test3 = "ye1et";
// 	printf("%s: %d\n", test1, ft_str_is_alpha(test1));
// 	printf("%s: %d\n", test2, ft_str_is_alpha(test2));
// 	printf("%s: %d\n", test3, ft_str_is_alpha(test3));
// }
