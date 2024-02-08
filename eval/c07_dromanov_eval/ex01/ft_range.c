/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanov <dromanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:14:19 by dromanov          #+#    #+#             */
/*   Updated: 2024/02/08 12:46:24 by dromanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	i;
// 	int	min;
// 	int	max;
// 	int	*arr;

// 	i = 0;
// 	min = 12;
// 	max = 12;
// 	arr = ft_range(min, max);
// 	while (i < max - min && arr[i])
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// }
