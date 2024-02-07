/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:26:02 by eallas            #+#    #+#             */
/*   Updated: 2024/02/03 15:50:17 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"

/**
 * Function that checks if the character is a number.
 */
int	ft_char_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * Function that checks if the string is a number.
 */
int	ft_string_is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_number(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * Function that checks if the string is a negative number.
 * If the string starts witha  minus sign, then the string
 * is negative and the function should return 0.
 */
int	ft_string_is_negative_number(char *str)
{
	if (str[0] == '-')
		return (1);
	return (0);
}

/**
 * Function that validates number.
 */
int	ft_validate_number(char *str)
{
	if (ft_string_is_negative_number(str))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (!ft_string_is_number(str))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
