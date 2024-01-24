/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefev <plefev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:29:48 by plefev            #+#    #+#             */
/*   Updated: 2024/01/21 17:45:37 by plefev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = to_lower(str[i]);
		++i;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char test1[] = "";
// 	char test2[] = "MONKA STRESS $ -OwO-";
// 	char test3[] = "pepeHands";
// 	char test4[] = "Re E e <._.> TT_TT";

//  	printf("%s\n", ft_strlowcase(test1));
//  	printf("%s\n", ft_strlowcase(test2));
//  	printf("%s\n", ft_strlowcase(test3));
//  	printf("%s\n", ft_strlowcase(test4));
// }
