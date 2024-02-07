/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akutsmun <akutsmun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:08:26 by akutsmun          #+#    #+#             */
/*   Updated: 2024/01/30 17:51:39 by akutsmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Factorial of 5: %d\n", ft_iterative_factorial(5));
// }