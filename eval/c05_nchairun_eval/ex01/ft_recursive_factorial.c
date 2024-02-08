/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:19:18 by nchairun          #+#    #+#             */
/*   Updated: 2024/02/07 10:23:44 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Purpose:
		to calculate the factorial of a given non-negative
		integer nb using a recursive approach.
		if argument is not valid the function should return 0.
*/

int	ft_recursive_factorial(int nb)
{
	int	result;
	int	fact;

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
		fact = ft_recursive_factorial(nb - 1);
		result = nb * fact;
	}
	return (result);
}

/*********  OUTPUT  *********/
// #include <stdio.h>

// int	main(void)
// {
// 	int number = 5;
// 	int result = ft_recursive_factorial(number);

// 	printf("%d! = %d\n", number, result);
// }