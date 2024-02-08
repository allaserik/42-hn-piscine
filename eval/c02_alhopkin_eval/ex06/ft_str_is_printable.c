/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhopkin <alhopkin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:39:57 by alhopkin          #+#    #+#             */
/*   Updated: 2024/02/07 12:19:46 by alhopkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	if (!str)
	{
		return (1);
	}
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 126)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
