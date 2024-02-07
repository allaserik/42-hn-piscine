/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepple <fepple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:36:49 by fepple            #+#    #+#             */
/*   Updated: 2024/01/25 09:24:45 by fepple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (--power > 0)
		res *= nb;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	pwr;

// 	pwr = ft_iterative_power(0, 3);
// 	printf("Factorial: %d\n", pwr);
// 	return (0);
// }
