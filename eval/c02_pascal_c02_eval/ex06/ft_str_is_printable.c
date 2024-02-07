/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:57:21 by plefev            #+#    #+#             */
/*   Updated: 2024/01/22 18:23:26 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_printable(str[i]))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;

	test1 = "";
	test2 = "\1";
	test3 = "\nhello\n";
	test4 = "smoll pepehands! ~!@#$ UwU";
	printf("%s: %d\n", test1, ft_str_is_printable(test1));
	printf("%s: %d\n", test2, ft_str_is_printable(test2));
	printf("%s: %d\n", test3, ft_str_is_printable(test3));
	printf("%s: %d\n", test4, ft_str_is_printable(test4));
}
