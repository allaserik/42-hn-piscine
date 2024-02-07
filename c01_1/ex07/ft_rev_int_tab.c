/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:54:18 by eallas            #+#    #+#             */
/*   Updated: 2024/01/29 11:35:51 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Swap elements at start and end indices
// Move indices towards the center
void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	arr[] = {1, 2, 3, 4, 5};
// 	int	size;

// 	// Example usage
// 	size = sizeof(arr) / sizeof(arr[0]);
// 	printf("Original array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	// Reverse the array
// 	ft_rev_int_tab(arr, size);
// 	printf("\nReversed array: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	return (0);
// }
