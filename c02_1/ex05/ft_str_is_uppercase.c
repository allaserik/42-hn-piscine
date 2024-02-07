/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:11:28 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 16:18:50 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checks if a character is uppercase.
 */
int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/**
 * function that returns 1 if the string given as a parameter contains only
 * uppercase alphabetical characters, and 0 if it contains any other character.
 * if a character in the string is not uppercase, the function returns 0.
 * otherwise, the function returns 1.
 */
int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
