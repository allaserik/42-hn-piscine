/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalache <khalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:14:10 by khalache          #+#    #+#             */
/*   Updated: 2024/01/25 16:45:02 by khalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int main()
// {
// 	int x = 13;
// 	int y = 3;
// 	int d;
// 	int m;
// 	ft_div_mod(x, y, &d, &m);
// 	printf("d for devision m for rminder: d = %d, m = %d\n", d, m);
// 	return (0);
// }