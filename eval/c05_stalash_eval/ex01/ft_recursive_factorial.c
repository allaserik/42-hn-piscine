/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:13:36 by stalash           #+#    #+#             */
/*   Updated: 2024/02/05 17:19:28 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb != 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	b;

	b = 0;
	printf("%d", ft_recursive_factorial(b));
	return (0);
}
