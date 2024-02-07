/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:39:47 by stalash           #+#    #+#             */
/*   Updated: 2024/02/05 10:57:39 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;
	int	i;

	if (nb < 2)
		return (0);
	prime = 1;
	i = 2;
	while (nb > i)
	{
		if (nb % i == 0)
		{
			prime = 0;
			break ;
		}
		i++;
	}
	if (prime)
		return (1);
	else
		return (0);
}

//#include <stdio.h>

//int ft_is_prime(int nb);
//int main(void)
//{
//	int a;
//	a = 27;

//	printf("%d", ft_is_prime(a));
//	return (0);
//}