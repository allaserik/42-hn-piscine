/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akutsmun <akutsmun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:17:52 by akutsmun          #+#    #+#             */
/*   Updated: 2024/01/30 18:31:05 by akutsmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_fibonacci(19));
// }
// //element: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 =>
// //index:   0 1 2 3 4 5 6  7  8  9 10 11 12   13  14 =>

// //element: => 610 987 1597 2584 4181 6765 10946 17711 28657 ...
// //index:   => 15  16  17    18   19   20    21    22   23  ...