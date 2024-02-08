/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkebede <hkebede@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:44:37 by hkebede           #+#    #+#             */
/*   Updated: 2024/02/05 21:47:22 by hkebede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}

// #include <stdio.h>

// int main (void)
// {
// 	printf("%d\n", ft_iterative_power(2,3));
// 	return (0);
// }