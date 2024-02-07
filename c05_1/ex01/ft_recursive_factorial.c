/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:30:00 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 16:56:43 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * A recursive function that returns the factorial of the number given as a
 * parameter.
• If the argument is not valid the function should return 0.
• Overflows must not be handled, the function return will be undefined.
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/**
 * Main function for testing ft_recursive_factorial.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(5));
// 	printf("%d\n", ft_recursive_factorial(0));
// 	printf("%d\n", ft_recursive_factorial(-1));
// }
