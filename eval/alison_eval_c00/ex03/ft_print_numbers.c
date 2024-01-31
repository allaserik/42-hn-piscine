/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhopkin <alhopkin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:24:53 by alhopkin          #+#    #+#             */
/*   Updated: 2024/01/29 15:27:51 by alhopkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	x;

	x = '0';
	while (x <= 9)
	{
		ft_putchar(x);
		x++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
