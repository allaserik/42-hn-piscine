/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdering <wdering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:27:59 by wdering           #+#    #+#             */
/*   Updated: 2024/02/08 14:13:47 by wdering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	m;
	int	*a;

	if (min >= max)
		return (NULL);
	a = (int *) malloc(4 * (max - min));
	m = 0;
	while (min < max)
	{
		a[m] = min;
		m++;
		min++;
	}
	return (a);
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
// 	int *a=ft_range(15,24);
// 	while(*(a+m)){
// 		ft_putnbr(a[m]);
// 		m++;}
// }