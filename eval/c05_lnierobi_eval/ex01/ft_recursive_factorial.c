/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnierobi <lnierobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:50 by lnierobi          #+#    #+#             */
/*   Updated: 2024/02/08 10:07:10 by lnierobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb -1));
	}
	else
	{
		return (1);
	}
}
//  int main(void)
// {
// 	int	i;
// 	i = ft_recursive_factorial(8);
// 	printf("recursivefactorial: %d",i);
// }
