/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:10:32 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 16:19:56 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checkt if a character is alpha.
 * If character is not alpha, returns 0.
 * Otherwise, returns 1.
 */
int	ft_char_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/**
 * Function that returns 1 if the string given as a parameter contains only
 * alphabetical characters, and 0 if it contains any other character.
 * It should return 1 if str is empty.
 *
 * Look for non-alphabetical characters in the string.
 * Return 0 if there are non-alphabetical characters in the string.
 * Return 1 if all characters are alphabetical or the string is empty
 */
int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_alpha(*str))
			return (0);
		i++;
	}
	return (1);
}
