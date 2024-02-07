/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:41:41 by stalash           #+#    #+#             */
/*   Updated: 2024/02/05 00:23:53 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

//#include <stdio.h>

//int main(void)
//{
//	int base;
//	int exponent;

//	base = 2;
//	exponent = 4;

//	printf("%d", ft_recursive_power(base, exponent));

//	return (0);
//}
