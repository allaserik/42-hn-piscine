/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:13:09 by nchairun          #+#    #+#             */
/*   Updated: 2024/02/07 11:29:47 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Purpose:
	to find the next prime number that is greater than
	or equal to the given number nb.

	Prime number is a number that is only divisible
	by 1 and itself, with no other factors
*/

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		i = 2;
		while (i <= 46341 && i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}

/*********  OUTPUT  *********/
// #include <stdio.h>

// int	main(void)
// {
// 	int number = 12;
// 	int result = ft_find_next_prime(number);
// 	printf("Next prime number is: %d\n", result);
// 	return (0);
// }