/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:12:13 by pamatya           #+#    #+#             */
/*   Updated: 2024/02/05 17:20:27 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowerize(char *str);

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				cap;

	cap = 1;
	i = 0;
	lowerize(str);
	while (str[i] != '\0')
	{
		if ((cap == 1) && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		cap = 0;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z'
				&& str[i] < 'a') || str[i] > 'z')
		{
			cap = 1;
		}
		i++;
	}
	return (str);
}

char	*lowerize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	string[] = "salut,
			// comment tu ~vas ? 42mots quarante-deux; cinquante+et+un";

// 	str = &string[0];
// 	printf("%s\n", ft_strcapitalize(str));
// }
