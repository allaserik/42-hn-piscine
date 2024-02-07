/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:06:37 by stalash           #+#    #+#             */
/*   Updated: 2024/02/05 00:11:10 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	i = 0;
	result = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

//#include <stdio.h>

//int main(void)
//{
//	int base;
//	int exponenet;

//	base = 8;
//	exponenet = 2;
//	printf("%d", ft_iterative_power(base, exponenet));

//	return (0);
//}
