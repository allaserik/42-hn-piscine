/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:54:24 by eallas            #+#    #+#             */
/*   Updated: 2024/01/29 11:35:16 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to partition the array for quicksort
// Swap elements if they are in the wrong order
// Swap the pivot element to its correct position

// Function to partition the array for quicksort
int	partition(int *tab, int low, int high)
{
	int	pivot;
	int	i;
	int	j;
	int	temp;

	pivot = tab[high];
	i = low - 1;
	j = low;
	while (j <= high - 1)
	{
		if (tab[j] < pivot)
		{
			i++;
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
		}
		j++;
	}
	temp = tab[i + 1];
	tab[i + 1] = tab[high];
	tab[high] = temp;
	return (i + 1);
}
// Quicksort function
// Find the partitioning index
// Recursively sort the sub-arrays
// Process the smaller sub-array first

void	quicksort(int *tab, int low, int high)
{
	int	pi;

	while (low < high)
	{
		pi = partition(tab, low, high);
		if (pi - low < high - pi)
		{
			quicksort(tab, low, pi - 1);
			low = pi + 1;
		}
		else
		{
			quicksort(tab, pi + 1, high);
			high = pi - 1;
		}
	}
}

// Wrapper function for quicksort
void	ft_sort_int_tab(int *tab, int size)
{
	quicksort(tab, 0, size - 1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	arr[] = {5, 2, 9, 1, 5, 6};
// 	int	size;

// 	// Example usage
// 	size = sizeof(arr) / sizeof(arr[0]);
// 	printf("Original array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	// Sort the array
// 	ft_sort_int_tab(arr, size);
// 	printf("\nSorted array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return (0);
// }
