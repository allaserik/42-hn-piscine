/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhopkin <alhopkin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:46:19 by alhopkin          #+#    #+#             */
/*   Updated: 2024/02/08 10:14:34 by alhopkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <ctype.h>

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	capitalize_next;

	x = 0;
	capitalize_next = 1;
	while (str[x])
	{
		if (ft_is_alphanumeric(str[x]))
		{
			if (capitalize_next && ft_is_lowercase(str[x]))
				str[x] -= 32;
			else if (!capitalize_next && ft_is_uppercase(str[x]))
				str[x] += 32;
			capitalize_next = 0;
		}
		else
			capitalize_next = 1;
		x++;
	}
	return (str);
}
