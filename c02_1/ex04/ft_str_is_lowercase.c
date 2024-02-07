/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:11:04 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 15:33:57 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checks if a character is lowercase.
 */
int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * Function that checks if a string is lowercase.
 * Find a character taht is not lowercase in the string. Then return 0.
 * Otherwise return 1.
 */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
