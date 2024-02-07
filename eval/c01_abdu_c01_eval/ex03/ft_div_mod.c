/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:54:50 by ademiroz          #+#    #+#             */
/*   Updated: 2024/01/25 16:27:58 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 155;
	b = 32;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d\n", a, b);
	printf("div: %d, mod: %d\n", div, mod);
	return (0);
}
