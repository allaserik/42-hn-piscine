/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:43:48 by ademiroz          #+#    #+#             */
/*   Updated: 2024/01/25 16:27:27 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 5;
	y = 10;
	*a = &x;
	*b = &y;
	printf("FIRST a = %d, b = %d\n", *a, *b);
	ft_swap(a, b);
	printf("AFTER a = %d, b = %d\n", *a, *b);
	return (0);
}
