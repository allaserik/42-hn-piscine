/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:08:33 by stalash           #+#    #+#             */
/*   Updated: 2024/02/05 10:40:58 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci (index -1) + ft_fibonacci (index - 2));
}

//#include <stdio.h>

//int main(void)
//{
//	int fibo;
//	fibo = 5;
//	printf("%d\n", fibo);

//	printf("F[%d] = %d",fibo, ft_fibonacci(fibo));

//	return (0);
//}
