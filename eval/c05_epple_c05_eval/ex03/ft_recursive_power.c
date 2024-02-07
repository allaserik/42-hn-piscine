/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepple <fepple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:43:50 by fepple            #+#    #+#             */
/*   Updated: 2024/01/25 10:42:01 by fepple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, --power));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	pwr;

// 	pwr = ft_recursive_power(2147483647, 1);
// 	printf("Factorial: %d\n", pwr);
// 	return (0);
// }
