/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:57:06 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 16:58:54 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * function ft_fibonacci that returns the n - th element of the Fibonacci
 * sequence, the first element being at the 0 index.We’ll consider that
 * the Fibonacci sequence starts like this : 0,	1, 1, 2.
 * • Overflows must not be handled, the function return will be undefined.
 * • Obviously, ft_fibonacci has to be recursive.
 * • If the index is less than 0, the function should return -1.
 */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/**
 * Main function to test ft_fibonacci.
 */
// int	main(void)
// {
// 	int i;

// 	i = ft_fibonacci(10);
// 	printf("%d\n", i);
// 	return (0);
// }
