/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:56:49 by abilohub          #+#    #+#             */
/*   Updated: 2024/01/24 16:55:15 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * this function does this
 * uses other functions
 * input needs to be
 */
char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			c;
	int				new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hello, world! this is a test.";

	write(1, str, sizeof(str) - 1);
	ft_strcapitalize(str);
	write(1, str, sizeof(str) - 1);
	return (0);
}
