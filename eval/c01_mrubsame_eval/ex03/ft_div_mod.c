/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubsame <mrubsame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:30:09 by mrubsame          #+#    #+#             */
/*   Updated: 2024/01/28 19:32:51 by mrubsame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*/
int	main(void)
{
	int a;
	int b;
	int mdiv;
	int mmod;

	a = 4;
	b = 2;
	ft_div_mod(a, b, &mdiv, &mmod);
	printf("%s%d%s", "Result of division ", mdiv, ".\n");
	printf("%s%d%s", "Remainder: ", mmod, ".\n");
	return (0);
}
*/