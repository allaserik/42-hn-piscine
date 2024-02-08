/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:33:27 by nchairun          #+#    #+#             */
/*   Updated: 2024/02/07 10:47:19 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Purpose:
	to calculate the power of a given number nb raised
	to the exponent power using an iterative approach.
*/

int	ft_recursive_power(int nb, int power)
{
	int	exponential;
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 || power == 0)
	{
		return (1);
	}
	else
	{
		exponential = ft_recursive_power(nb, power - 1);
		result = nb * exponential;
	}
	return (result);
}

/*********  OUTPUT  *********/
// #include <stdio.h>

// int	main(void)
// {
// 	int number = 2;
// 	int exponent = 2;

// 	int exponential = ft_recursive_power(number, exponent);

// 	printf("%d^%d = %d\n", number, exponent, exponential);

// 	return (0);
// }