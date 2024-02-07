/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:04:25 by amohame2          #+#    #+#             */
/*   Updated: 2024/01/30 21:04:44 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (nb == i)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (1 && nb < 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d" , ft_find_next_prime(4));
// }