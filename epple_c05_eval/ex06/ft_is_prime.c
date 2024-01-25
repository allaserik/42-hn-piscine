/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepple <fepple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:11:53 by fepple            #+#    #+#             */
/*   Updated: 2024/01/25 15:39:27 by fepple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 1;
	while (++i < nb)
		if (nb % i == 0)
			return (0);
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	is_prime;

// 	is_prime = ft_is_prime(2147483647);
// 	printf("ft_is_prime: %d\n", is_prime);
// 	return (0);
// }
