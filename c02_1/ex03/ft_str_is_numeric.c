/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:10:45 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 16:19:26 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checks if a character is a number.
 * Checks if a character is not a number then returns 0.
 * Otherwise returns 1.
 */
int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * Function that checks if a string is a number.
 * Checks if a character in the string is not numeric, then returns 0.
 * Otherwise returns 1.
 */
int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_numeric(*str))
			return (0);
		i++;
	}
	return (1);
}
