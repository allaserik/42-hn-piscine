/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 00:44:41 by lmezock-          #+#    #+#             */
/*   Updated: 2024/01/29 17:16:20 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
// int main()
// {
// 	printf("%d", ft_str_is_printable("jhfiu"));
// 	return(0);
// }