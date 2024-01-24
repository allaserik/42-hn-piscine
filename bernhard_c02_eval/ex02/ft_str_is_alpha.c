/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beschrod <beschrod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:59:17 by beschrod          #+#    #+#             */
/*   Updated: 2024/01/21 18:11:16 by beschrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			++index;
			continue ;
		}
		else if ((str[index] >= 'a' && str[index] <= 'z'))
		{
			++index;
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_alpha("sdfasfdsfasfa[ASkasdkALFlkdlA"));
// }
