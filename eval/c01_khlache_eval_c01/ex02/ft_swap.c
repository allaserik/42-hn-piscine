/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalache <khalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:57:09 by khalache          #+#    #+#             */
/*   Updated: 2024/01/24 16:12:28 by khalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	if (*a != *b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

// #include <stdio.h>
// int main()
// {
// 	int x = 5;
// 	int y = 9;
// 	ft_swap(&x, &y);
// 	printf("After swapping: x = %d, y = %d\n", x, y);
// 	return (0);
// }