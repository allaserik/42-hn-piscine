/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkebede <hkebede@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:57:22 by hkebede           #+#    #+#             */
/*   Updated: 2024/02/05 22:12:30 by hkebede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int		result;

	result = 0;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		result = 0;
	}
	else if (index == 1)
	{
		result = 1;
	}
	else if (index > 1)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}

// #include <stdio.h>

// int main ()
// {
// 	printf("%d\n", ft_fibonacci(10));
// 	return (0);
// }