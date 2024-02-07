/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 02:09:42 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 02:14:26 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			count++;
		i++;
	}
	return (count);
}

// #include <stdio.h>
// int	print(char *x)
// {
// 	if (x[0] == 'a')
// 		return (1);
// 	return (0);
// }
// int	main(void)
// {
// 	char	*arr[4] = {"test1", "atest2", "test3", "satsd3"};

// 	printf("%d ", ft_count_if(arr, 4, print));
// }