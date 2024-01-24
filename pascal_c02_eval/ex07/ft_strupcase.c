/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefev <plefev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:29:48 by plefev            #+#    #+#             */
/*   Updated: 2024/01/21 16:29:55 by plefev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = to_upper(str[i]);
		++i;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char test1[] = "";
// 	char test2[] = "monka123 STRESS $ -OwO-";
// 	char test3[] = "pepeHands";
// 	char test4[] = "Re E e <._.> tt_tt";

//  	printf("%s\n", ft_strupcase(test1));
//  	printf("%s\n", ft_strupcase(test2));
//  	printf("%s\n", ft_strupcase(test3));
//  	printf("%s\n", ft_strupcase(test4));
// }
