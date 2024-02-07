/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:11:34 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 16:15:17 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that returns 1 if the character is printable, 0 otherwise.
 */
int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/**
 * Function that returns 1 if the string given as a parameter contains only
 * printable characters, and 0 if it contains any other character.
 */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
