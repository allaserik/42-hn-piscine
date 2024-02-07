/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:52:13 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 16:33:11 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

#include <stdio.h>

void	print(int x)
{
	printf("%d\n", x);
}
int	main(void)
{
	int arr[5] = {1, 2, 3, 9, 100};

	ft_foreach(arr, 5, print);
}
