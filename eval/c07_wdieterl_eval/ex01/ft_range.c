/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdieterl <wdieterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:33:34 by wdieterl          #+#    #+#             */
/*   Updated: 2024/02/07 10:10:14 by wdieterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*val;
	int	i;

	val = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		val[i] = min + i;
		i++;
	}
	return (val);
}

/* int	main(void)
{
	int	min = 2;
	int max = 8;
	int i = 0;
	int *result = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", result[i]);
		i++;
	}
	printf("\n");
	return 0;
} */
