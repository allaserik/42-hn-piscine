/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:59:07 by eallas            #+#    #+#             */
/*   Updated: 2024/02/06 14:30:22 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * Function ft_ultimate_range which allocates and assigns an array of ints.
 * This int array should contain all values between min and max.
 * Min included - max excluded.
 * The size of range should be returned (or -1 on error).
 * If the value of min is greater or equal to max’s value,
 * range will point on NULL and it should return 0.
 */
int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;
	int	*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	d = (buffer = malloc(bound * sizeof(int)));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}

/**
 * Main function to test ft_ultimate_range function.
 */

// #include <stdio.h>

// int	main(void)
// {
// 	int	*range;
// 	int	size;

// 	range = NULL;
// 	size = ft_ultimate_range(&range, 5, 10);
// 	printf("Size of range: %d\n", size);
// 	if (range)
// 	{
// 		printf("Range elements:\n");
// 		for (int i = 0; i < size; i++)
// 		{
// 			printf("%d ", range[i]);
// 		}
// 		printf("\n");
// 		// Free the allocated memory
// 		free(range);
// 	}
// 	return (0);
// }
