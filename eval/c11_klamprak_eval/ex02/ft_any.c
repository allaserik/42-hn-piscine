/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 01:10:23 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 01:20:11 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			return (1);
		i++;
	}
	return (0);
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
// 	char	*arr[4] = {"test1", "atest2", "test3", 0};

// 	printf("%d ", ft_any(arr, print));
// }