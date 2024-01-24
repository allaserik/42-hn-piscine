/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoyat <ngoyat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 00:01:01 by ngoyat            #+#    #+#             */
/*   Updated: 2024/01/20 14:48:51 by ngoyat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	*positionl;
	int	*positionr;
	int	counter;

	positionr = tab + size -1;
	positionl = tab;
	counter = 0;
	while (counter <= size / 2)
	{
		tmp = *positionl;
		*positionl = *positionr;
		*positionr = tmp;
		counter++;
		positionl++;
		positionr--;
	}
}
// int	main(void)
// {
	// int	array[5] = {1,2,3,4,5};
	// ft_rev_int_tab(&array[0], 5);
	// for(int i = 0; i <= 4; i++)
	// {
		// printf("%d", array[i]);
	// }
	// return (0);
// }
