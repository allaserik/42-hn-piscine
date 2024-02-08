/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkebede <hkebede@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:48:48 by hkebede           #+#    #+#             */
/*   Updated: 2024/02/05 21:51:18 by hkebede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
	else if (power > 0)
	{
		i = nb * ft_recursive_power(nb, power - 1);
		power--;
	}
	return (i);
}

// #include <stdio.h>

// int main (void)
// {
// 	printf("%d\n", ft_recursive_power(2,3));
// 	return (0);
// }