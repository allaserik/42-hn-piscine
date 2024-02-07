/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:55:04 by amohame2          #+#    #+#             */
/*   Updated: 2024/01/30 21:03:59 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (nb == i)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	test_cases[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
// 	int	num_test_cases;

// 	num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);
// 	printf("Prime :\n");
// 	for (int i = 0; i < num_test_cases; i++)
// 	{
// 		if (ft_is_prime(test_cases[i]))
// 		{
// 			printf("%d ", test_cases[i]);
// 		}
// 	}
// 	printf("\n");
// 	printf("not prime");
// 	for (int i = 0; i < num_test_cases; i++)
// 	{
// 		if (!ft_is_prime(test_cases[i]))
// 		{
// 			printf("%d ", test_cases[i]);
// 		}
// 	}
// 	printf("\n");
// 	return (0);
// }
