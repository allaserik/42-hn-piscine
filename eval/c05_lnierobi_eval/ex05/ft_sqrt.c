/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnierobi <lnierobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:01:36 by lnierobi          #+#    #+#             */
/*   Updated: 2024/02/08 09:44:51 by lnierobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb > 46340 * 46340)
		return (0);
	while (nb >= i * i)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 2;
// 	printf("%i", ft_sqrt(nb));
// 	return (0);
// }
