/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhopkin <alhopkin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:12:59 by alhopkin          #+#    #+#             */
/*   Updated: 2024/02/07 11:24:08 by alhopkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	if (!str)
	{
		return (1);
	}
	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A' || str[x] > 'Z') && (str[x] < 'a' || str[x] > 'z'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
