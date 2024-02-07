/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:54:53 by lmezock-          #+#    #+#             */
/*   Updated: 2024/01/31 12:06:52 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start_of_word;

	i = 0;
	is_start_of_word = 1;
	while (str[i] != '\0')
	{
		if (is_start_of_word == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (is_start_of_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z'
				&& str[i] < 'a') || str[i] > 'z')
			is_start_of_word = 1;
		else
			is_start_of_word = 0;
		i++;
	}
	return (str);
}
// int main()
// {
// 	char str[89] = "salut, comMent tu vas ? 42mots quarante - deux; cinquante
// + et +un ";
// 	ft_strcapitalize(str);
// 	printf ("%s", str);
// 	return (0);
// }