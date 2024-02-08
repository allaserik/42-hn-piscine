/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:51:09 by nchairun          #+#    #+#             */
/*   Updated: 2024/02/07 10:55:46 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Purpose:
	to calculate the n-th element of the Fibonacci sequence recursively.

	if the index is less than 0, the function should return -1.

	list of Fibonacci numbers: https://planetmath.org/listoffibonaccinumbers
*/

int	ft_fibonacci(int index)
{
	int	fibonacci;

	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	fibonacci = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fibonacci);
}

/*********  OUTPUT  *********/
// #include <stdio.h>

// int	main(void)
// {
// 	int index = 3;
// 	int result = ft_fibonacci(index);

// 	printf("Fibonacci number at index %d is: %d\n", index, result);

// 	return (0);
// }