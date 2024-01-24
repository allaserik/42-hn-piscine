/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:09:19 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/23 01:39:15 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_upcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (!((str[j - 1] >= 'A' && str[j - 1] <= 'Z') || (str[j - 1] >= 'a'
					&& str[j - 1] <= 'z')))
		{
			if (((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a'
						&& str[j] <= 'z')))
			{
				if (!((str[j - 1] >= '0' && str[j - 1] <= '9')))
				{
					{
						str[j] = str[j] - 'x' + 'X';
					}
				}
			}
		}
		j++;
	}
	return (str);
}

char	*ft_lowcase(char *str)
{
	int		j;

	j = 0;
	while (str[j] != '\0')
	{
		if (((str[j] >= 'A' && str[j] <= 'Z')))
		{
			str[j] = str[j] - 'X' + 'x';
		}
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	ft_lowcase(str);
	ft_upcase(str);
	return (str);
}

// #include <unistd.h>
// int	main(void)
// {
// 	int	t;
// 	t = 0;
// 	char source[43] = "saLuT, ? 42Mots quarante-deux; cinquante+un";
// 	char result[80];
// 	ft_strcapitalize(source);
// 	while (source[t] != '\0')
// 	{
// 		result[t] = source[t];
// 		t++;
// 	}
// 	result[t] = '\0';
// 	t = 0;
// 	while (result[t] != '\0')
// 	{
// 		write(1, &result[t], 1);
// 		t++;
// 	}
// 	return (0);
// }