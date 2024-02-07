/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:53:48 by eallas            #+#    #+#             */
/*   Updated: 2024/02/06 12:04:21 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_quicksort(char **tab, int low, int high);
int		ft_partition(char **tab, int low, int high);

/**
 * We’re dealing with a program here, you should therefore have a function
 * main in your .c file.
 * Create a program that displays its given arguments sorted by ascii order.
 * It should display all arguments, except for argv[0].
 * One argument per line.
 *
 * In the main function, we call ft_quicksort to sort the array of strings
 * (argv) representing the command-line arguments. We pass argv + 1 to skip
 * the program name (argv[0]), and we subtract 2 from argc to account for the
 * zero-based indexing and excluding the program name.
 *
 * ./a.out alpha beta gamma kappa zeta
 * ./a.out alpha zeta kappa gamma beta
 */
int	main(int argc, char **argv)
{
	int	i;

	ft_quicksort(argv + 1, 0, argc - 2);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}

/**
 * Function that displays a string of characters on the standard output.
 */
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/**
 * Function that lexicographically compares the null-terminated
 * strings s1 and s2.
 */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * Function which sorts an array of strings by ascending order.
 * Quicksort function
 * Find the partitioning index
 * Recursively sort the sub-arrays
 * Process the smaller sub-array first
 */
void	ft_quicksort(char **tab, int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = ft_partition(tab, low, high);
		ft_quicksort(tab, low, pivot - 1);
		ft_quicksort(tab, pivot + 1, high);
	}
}

/**
 * Function to partition the array for quicksort
 * Swap elements if they are in the wrong order
 * Swap the pivot element to its correct position
 */
int	ft_partition(char **tab, int low, int high)
{
	char	*pivot;
	int		i;
	int		j;
	char	*temp;

	pivot = tab[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (ft_strcmp(tab[j], pivot) < 0)
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
