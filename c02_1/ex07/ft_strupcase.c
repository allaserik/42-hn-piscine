/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:16:21 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 16:22:56 by eallas           ###   ########.fr       */
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
 *  Function that transforms every letter to uppercase.
 */
char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
