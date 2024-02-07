/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:16:46 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 02:46:07 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	func(int x, int y)
// {
// 	return (x - y);
// 	return (0);
// }
// int	main(void)
// {
// 	int	arr[10] = {1, 2, 2, 2, 5, 7, 8, 9, 10, 199};
// 	printf("%d ", ft_is_sort(arr, 10, func));
// }