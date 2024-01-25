/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beschrod <beschrod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:59:17 by beschrod          #+#    #+#             */
/*   Updated: 2024/01/21 18:38:26 by beschrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (str[index] >= 32 && str[index] <= 126)
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
// 	printf("%d", ft_str_is_printable("\nasdasd"));
// }
