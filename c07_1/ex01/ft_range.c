/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:37:56 by eallas            #+#    #+#             */
/*   Updated: 2024/02/06 13:58:05 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * Function ft_range returns an array of ints. This int array should
 * contain all values between min and max.
 * Min included -max excluded.
 * If min´value is greater or equal to max’s value,
 * a null pointer should be returned.
 */
int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i++] = min++;
	}
	return (range);
}

/**
 * Main function to test ft_range function.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	int	min_values[] = {0, 5, -10};
// 	int	max_values[] = {5, 10, 0};
// 	int	num_test_cases;
// 	int	min;
// 	int	max;
// 	int	*range;

// 	num_test_cases = sizeof(min_values) / sizeof(min_values[0]);
// 	// Iterate over each test case
// 	for (int i = 0; i < num_test_cases; i++)
// 	{
// 		min = min_values[i];
// 		max = max_values[i];
// 		// Call ft_range function
// 		range = ft_range(min, max);
// 		// Check if the returned array is not NULL
// 		if (range != NULL)
// 		{
// 			printf("Range from %d to %d:\n", min, max);
// 			// Print the elements of the range
// 			for (int j = 0; j < max - min; j++)
// 			{
// 				printf("%d ", range[j]);
// 			}
// 			// Free the allocated memory
// 			free(range);
// 		}
// 		else
// 		{
// 			printf("Invalid input: min >= max\n");
// 		}
// 		printf("\n");
// 	}
// 	return (0);
// }
