/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepple <fepple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:45:15 by fepple            #+#    #+#             */
/*   Updated: 2024/01/25 15:39:27 by fepple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int num)
{
	int	i;

	if (num <= 1)
		return (0);
	if (num <= 3)
		return (1);
	if (num % 2 == 0 || num % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= num)
	{
		if (num % i == 0 || num % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;
	int	found;

	if (nb <= 2)
		return (2);
	prime = nb;
	found = 0;
	while (!found)
	{
		if (prime++ == 2147483647)
			return (2147483647);
		if (is_prime(prime))
			found = 1;
	}
	return (prime);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb;
// 	int	prime;

// 	nb = 2147483646;
// 	prime = ft_find_next_prime(nb);
// 	printf("next prime: %d\n", prime);
// 	return (0);
// }
