/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 01:02:01 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 01:09:13 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		result[i] = (*f)(tab[i]);
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int	print(int x)
// {
// 	return (x + 10);
// }
// int	main(void)
// {
// 	int	arr[5] = {1, 2, 3, 9, 100};
// 	int	*result;
// 	int	i;

// 	result = ft_map(arr, 5, print);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", result[i]);
// 		i++;
// 	}
// }