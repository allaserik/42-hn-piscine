/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkebede <hkebede@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:32:46 by hkebede           #+#    #+#             */
/*   Updated: 2024/02/05 21:36:59 by hkebede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
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
	else if (nb > 0)
	{
		i = nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (i);
}

// #include <stdio.h>

// int main (void)
// {
// 	printf("%d\n", ft_recursive_factorial(5));
// 	return (0);
// }