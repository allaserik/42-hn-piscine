/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amohame2 <amohame2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:20:48 by amohame2          #+#    #+#             */
/*   Updated: 2024/01/30 15:26:13 by amohame2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 1)
	{
		factorial *= nb--;
	}
	return (factorial);
}

// #include <stdio.h>
// int main(void)
// {
//     int num = ft_iterative_factorial(0);
//     printf("%d" , num);
// }