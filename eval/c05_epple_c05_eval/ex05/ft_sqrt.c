/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepple <fepple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:19:59 by fepple            #+#    #+#             */
/*   Updated: 2024/01/25 15:42:30 by fepple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	l;
	int	h;
	int	res;

	if (nb < 0)
		return (0);
	l = 1;
	h = nb;
	res = 0;
	while (l <= h)
	{
		if ((l + (h - l) / 2) <= nb / (l + (h - l) / 2))
		{
			res = (l + (h - l) / 2);
			l = (l + (h - l) / 2) + 1;
		}
		else
		{
			h = (l + (h - l) / 2) - 1;
		}
	}
	if (res * res == nb)
		return (res);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	sqrt;

// 	sqrt = ft_sqrt(2147483647);
// 	printf("sqrt: %d\n", sqrt);
// 	return (0);
// }

// 2147483647
