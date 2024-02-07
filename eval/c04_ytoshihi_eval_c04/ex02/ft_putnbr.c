/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoshihi <ytoshihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 08:50:58 by ytoshihi          #+#    #+#             */
/*   Updated: 2024/01/31 16:53:21 by ytoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print_value;
	char	minus;

	minus = '-';
	if (nb < -2147483647)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, &minus, 1);
		nb = -nb;
	}
	if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
	}
	print_value = nb % 10 + '0';
	write(1, &print_value, 1);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
