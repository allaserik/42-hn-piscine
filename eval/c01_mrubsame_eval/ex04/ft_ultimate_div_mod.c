/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubsame <mrubsame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 09:10:56 by mrubsame          #+#    #+#             */
/*   Updated: 2024/01/28 19:39:45 by mrubsame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = *a;
	tmp2 = *b;
	*a = tmp1 / tmp2;
	*b = tmp1 % tmp2;
}
/*
int	main(void)
{
	int	ma;
	int	mb;

	ma = 4;
	mb = 2;
	ft_ultimate_div_mod(&ma, &mb);
	printf("%s%d%s", "Result of division: ", ma, ".\n");
	printf("%s%d%s", "Remainder: ", mb, ".\n");
	return (0);
}
*/