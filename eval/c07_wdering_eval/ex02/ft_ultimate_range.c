/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:27:59 by wdering           #+#    #+#             */
/*   Updated: 2024/02/08 15:13:51 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	m;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(4 * (max - min));
	if (*range == NULL)
		return (-1);
	m = 0;
	while (m < (max - min))
	{
		(*range)[m] = min + m;
		m++;
	}
	return (max - min);
}

// #include <unistd.h>
// int	ft_is_negative(int n)
// {
// 	char	u;

// 	u = '-';
// 	if (n < 0)
// 	{
// 		write (1, &u, 1);
// 		return (-n);
// 	}
// 	return (n);
// }
// int	power(int base, int pow)
// {
// 	int	sol;
// 	int	i;

// 	i = 0;
// 	sol = 1;
// 	while (i < pow)
// 	{
// 		sol = base * sol;
// 		i++;
// 	}
// 	return (sol);
// }
// void	div_mod(int *ptr, int base, int pow)
// {
// 	*(ptr + 1) = *ptr;
// 	*ptr = *(ptr + 1) % power (base, pow);
// 	*(ptr + 1) = *(ptr + 1) / power (base, pow);
// 	*(ptr + 1) = *(ptr + 1) + 48;
// }
// void	ft_putnbr(int nb)
// {
// 	int	div[2];
// 	int	base;
// 	int	pow;
// 	int	*ptr;
// 	int	start;

// 	start = 0;
// 	if (nb == -2147483648)
// 		write(1, &"-2147483648", 11);
// 	else
// 	{
// 		div[0] = ft_is_negative(nb);
// 		ptr = &div[0];
// 		base = 10;
// 		pow = 9;
// 		while (pow >= 0)
// 		{
// 			div_mod(ptr, base, pow);
// 			if (*(ptr + 1) > 48 | pow == 0)
// 				start = 1;
// 			if (start > 0)
// 				write(1, (ptr + 1), 1);
// 			pow--;
// 		}
// 	}
// }
// int main(){
// 	int m = 0;
// 	int **r;
// 	int a =ft_ultimate_range(r,15,24);
// 	while(*(*r+m)){
// 		ft_putnbr((*r)[m]);
// 		m++;}
// }
