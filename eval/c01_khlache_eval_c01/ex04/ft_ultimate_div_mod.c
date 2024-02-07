/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalache <khalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:16:21 by khalache          #+#    #+#             */
/*   Updated: 2024/01/25 16:44:37 by khalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}

// #include <stdio.h>
// int main ()
// {
// int x = 13;
// int y = 3;
// int n;
// int s;
// ft_ultimate_div_mod(&x, &y);
//     printf("after x = %d\n , y= %d\n", x , y);
//     return (0);
// }