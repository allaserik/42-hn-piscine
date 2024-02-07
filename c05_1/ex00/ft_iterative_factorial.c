/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:25:42 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 17:26:34 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * An iterated function that returns a number. This number is the result of a
 * factorial operation based on the number given as a parameter.
 * • If the argument is not valid the function should return 0.
 * • Overflows must not be handled, the function return will be undefined.
 */
int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 1)
	{
		factorial *= nb--;
	}
	return (factorial);
}

/**
 * Test main for ft_iterative_factorial.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	printf("%d\n", ft_iterative_factorial(3));
// 	printf("%d\n", ft_iterative_factorial(4));
// 	printf("%d\n", ft_iterative_factorial(5));
// 	printf("%d\n", ft_iterative_factorial(6));
// 	printf("%d\n", ft_iterative_factorial(7));
// 	printf("%d\n", ft_iterative_factorial(8));
// 	printf("%d\n", ft_iterative_factorial(9));
// 	printf("%d\n", ft_iterative_factorial(10));
// }
