/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:26:47 by nchairun          #+#    #+#             */
/*   Updated: 2024/02/07 10:49:53 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Purpose:
	to calculate the power of a given number nb raised
	to the exponent power using an iterative approach.
*/

int	ft_iterative_power(int nb, int power)
{
	int	exponential;
	int	i;

	i = 0;
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
		exponential = 1;
		while (i < power)
		{
			exponential = exponential * nb;
			i++;
		}
	}
	return (exponential);
}

/*********  OUTPUT  *********/
// #include <stdio.h>

// int	main(void)
// {
// 	int number = 2;
// 	int exponent = 2;

// 	int exponential = ft_iterative_power(number, exponent);
// 	printf("%d^%d = %d\n", number, exponent, exponential);
// 	return (0);
// }