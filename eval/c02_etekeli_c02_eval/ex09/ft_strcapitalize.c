/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:23:21 by etekeli           #+#    #+#             */
/*   Updated: 2024/02/05 14:04:02 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while ((str[i]) != '\0')
	{
		c = str[i];
		if (next == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ?
// 42mots quarante-deux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(str));
// 	return (0);
// }
