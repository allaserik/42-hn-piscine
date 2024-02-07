/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:14:37 by fepple            #+#    #+#             */
/*   Updated: 2024/01/25 16:54:47 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *
 */
int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb > 0)
		res *= nb;
	return (res);
}

#include <stdio.h>

int	main(void)
{
	int	fac;

	fac = ft_iterative_factorial(10);
	printf("factorial of ...: %d\n", fac);
	return (0);
}
