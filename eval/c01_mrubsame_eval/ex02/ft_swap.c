/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubsame <mrubsame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 07:54:03 by mrubsame          #+#    #+#             */
/*   Updated: 2024/01/28 19:23:41 by mrubsame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	tst1;
	int tst2;
	int	*a;
	int	*b;

	tst1 = 2;
	tst2 = 4;
	a = &tst1;
	b = &tst2;
	ft_swap(a, b);
	printf("%d%d", tst1, tst2);
	return (0);
}
*/