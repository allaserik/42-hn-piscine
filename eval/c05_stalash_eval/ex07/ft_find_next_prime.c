/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:59:03 by stalash           #+#    #+#             */
/*   Updated: 2024/02/05 11:33:09 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_num(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
	while (!prime_num(i))
		i++;
	return (i);
}

int	prime_num(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

//#include <stdio.h>

//int main(void)
//{
//	int bc;

//	bc = 22;
//	printf("%d", ft_find_next_prime(bc));
//	return (0);
//}