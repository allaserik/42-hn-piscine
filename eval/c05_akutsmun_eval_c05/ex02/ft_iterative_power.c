/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akutsmun <akutsmun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:20:43 by akutsmun          #+#    #+#             */
/*   Updated: 2024/01/30 18:21:38 by akutsmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(12, 2));
// }