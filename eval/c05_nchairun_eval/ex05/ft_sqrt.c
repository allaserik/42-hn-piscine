/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:56:02 by nchairun          #+#    #+#             */
/*   Updated: 2024/02/07 10:58:18 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Purpose:
	to calculate the square root of a given non-negative integer n.

	return 0 if the square root is an irrational number

	root must be maximum 46340 because 46340^2 is 2147483647 (max value of int)
*/

int	ft_sqrt(int nb)
{
	int	root;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (0);
	}
	root = 1;
	while (root * root <= nb && root <= 46340)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}

/*********  OUTPUT  *********/
// #include <stdio.h>

// int	main(void)
// {
// 	int number = 16;
// 	int result = ft_sqrt(number);

// 	printf("Square root of %d is: %d\n", number, result);

// 	return (0);
// }