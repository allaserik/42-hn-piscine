/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnierobi <lnierobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:29:12 by lnierobi          #+#    #+#             */
/*   Updated: 2024/02/07 20:26:31 by lnierobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 0;
// 	printf("Factorial of: %d is %d", nb, ft_iterative_factorial(nb));
// 	return (0);
// }
