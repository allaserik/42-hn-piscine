/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoshihi <ytoshihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:24:56 by ytoshihi          #+#    #+#             */
/*   Updated: 2024/01/31 11:02:10 by ytoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	unsigned int	value;
	unsigned int	sign;
	unsigned int	num_exist;
	unsigned int	sign_exist;

	value = 0;
	sign = 1;
	num_exist = 0;
	sign_exist = 0;
	while (*str && *str <= ' ')
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return (value * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	value;

// 	value = ft_atoi(" \t  -+a---1234ab567");
// 	printf("%d\n", value);
// }
