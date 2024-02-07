/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:47:12 by stalash           #+#    #+#             */
/*   Updated: 2024/02/05 00:09:57 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}

//#include <stdio.h>

//int main(void)
//{
//	int ac = 16;

//	printf("%d", ft_iterative_factorial(ac));

//	return (0);
//}
