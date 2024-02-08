/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:49:02 by nchairun          #+#    #+#             */
/*   Updated: 2024/02/07 10:46:52 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Purpose:
		to calculate the factorial of a given non-negative
		integer nb using an iterative approach.
		if argument is not valid the function should return 0.
*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
	}
	return (fact);
}

/*********  OUTPUT  *********/
// #include <stdio.h>

// int	main(void)
// {
// 	int input_factorial = 4;

// 	int result = ft_iterative_factorial(input_factorial);

// 	printf("%d! = %d\n", input_factorial, result);;

// 	return (0);
// }