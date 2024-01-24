/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beschrod <beschrod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:59:17 by beschrod          #+#    #+#             */
/*   Updated: 2024/01/22 11:11:08 by beschrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		++index;
	}
	return (str);
}

// int	main(void)
// {
//     char test[] = {'a', 'b', 'c', '1', 's', 'D', 'H', '-', 0};
// 	ft_strlowcase(test);

//     printf("%s", test);
// }
