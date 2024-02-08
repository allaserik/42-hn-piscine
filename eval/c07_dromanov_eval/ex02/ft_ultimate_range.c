/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanov <dromanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:40:10 by dromanov          #+#    #+#             */
/*   Updated: 2024/02/08 12:46:14 by dromanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i;
// 	int min;
// 	int max;
// 	int **range;
// 	int *arr;

// 	i = 0;
// 	min = 0;
// 	max = 0;
// 	range = &arr;
// 	// ft_ultimate_range(range, min, max);
// 	printf("%d\n", ft_ultimate_range(range, min, max));
// 	while (i < max - min && range[i])
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	// 	// }
