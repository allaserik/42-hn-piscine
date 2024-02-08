/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhopkin <alhopkin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:39:11 by alhopkin          #+#    #+#             */
/*   Updated: 2024/02/07 12:13:22 by alhopkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	if (!str)
	{
		return (1);
	}
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || str[x] > 'Z')
		{
			return (0);
		}
	}
	return (1);
}
