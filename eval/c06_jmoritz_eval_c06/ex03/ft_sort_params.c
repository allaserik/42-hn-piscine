/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoritz <jmoritz@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:28:25 by jmoritz           #+#    #+#             */
/*   Updated: 2024/01/31 14:38:50 by jmoritz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_bubble_sort(char **tab, int size, int i, int j)
{
	if (tab == 0 || size <= 0)
		return ;
	if (i >= size - 1)
		return ;
	if (j < size - i - 1)
	{
		if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			ft_swap(&tab[j], &tab[j + 1]);
		ft_bubble_sort(tab, size, i, j + 1);
	}
	else
		ft_bubble_sort(tab, size, i + 1, 0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_bubble_sort(argv, argc, 0, 0);
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
	return (0);
}
