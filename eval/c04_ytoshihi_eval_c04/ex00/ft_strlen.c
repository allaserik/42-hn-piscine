/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 08:43:14 by ytoshihi          #+#    #+#             */
/*   Updated: 2024/02/05 14:57:27 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int	count;

// 	count = 0;
// 	count = ft_strlen("He0llo WorldDSFSFSD");
// 	printf("%d\n", count);
// 	count = strlen("Hell0o WorldDSFSFSD");
// 	printf("%d", count);
// 	return (0);
// }
