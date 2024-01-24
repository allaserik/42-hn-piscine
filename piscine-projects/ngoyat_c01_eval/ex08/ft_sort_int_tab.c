/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoyat <ngoyat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:54:29 by ngoyat            #+#    #+#             */
/*   Updated: 2024/01/20 14:51:51 by ngoyat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swapped;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			return ;
		i++;
	}
}
// int	main(void)
// {
	// int	tab[] = {64, 34, 25, 12, 22, 11, 90};
	// int	size = sizeof(tab) / sizeof(tab[0]);
//
	// printf("Unsorted array: ");
	// for (int i = 0; i < size; i++)
		// printf("%d ", tab[i]);
	// printf("\n");
	// ft_sort_int_tab(tab, size);
	// printf("Sorted array: ");
	// for (int i = 0; i < size; i++)
		// printf("%d ", tab[i]);
	// printf("\n");
	// return 0;
// }
