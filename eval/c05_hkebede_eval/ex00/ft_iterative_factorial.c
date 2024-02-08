/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkebede <hkebede@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:17:54 by hkebede           #+#    #+#             */
/*   Updated: 2024/02/08 11:53:49 by hkebede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

// #include <stdio.h>

// int main (void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// 	return (0);
// }