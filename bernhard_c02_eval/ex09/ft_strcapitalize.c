/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beschrod <beschrod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:59:17 by beschrod          #+#    #+#             */
/*   Updated: 2024/01/22 12:26:53 by beschrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	is_uppercase(char *str, int *index, int *uppercase)
{
	if (str[*index] >= 'a' && str[*index] <= 'z')
	{
		str[*index] = str[*index] - 32;
		*uppercase = 0;
	}
	else if (str[*index] >= 'A' && str[*index] <= 'Z')
	{
		*uppercase = 0;
	}
	else if (str[*index] >= '0' && str[*index] <= '9')
	{
		*uppercase = 0;
	}
	*index += 1;
}

void	is_lowercase(char *str, int *index, int *uppercase)
{
	if (str[*index] >= 'A' && str[*index] <= 'Z')
	{
		str[*index] = str[*index] + 32;
		*index += 1;
	}
	else if (str[*index] >= 'a' && str[*index] <= 'z')
	{
		*index += 1;
	}
	else if (str[*index] >= '0' && str[*index] <= '9')
	{
		*index += 1;
	}
	else
	{
		*index += 1;
		*uppercase = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	uppercase;

	index = 0;
	uppercase = 1;
	while (str[index] != 0)
	{
		if (uppercase == 1)
		{
			is_uppercase(str, &index, &uppercase);
		}
		else
		{
			is_lowercase(str, &index, &uppercase);
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char myString[] = {'s', 'a', 'l', 'u', 't', ',', ' ', 'c', 'o', 'm', 'm',
// 'e', 'n', 't', ' ', 't', 'u', ' ', 'v', 'a', 's', ' ', '?', ' ', '4',
// '2', 'm', 'o', 't', 's', ' ', 'q', 'u', 'a', 'r', 'a', 'n', 't', 'e',
// '-', 'd', 'e', 'u', 'x', ';', ' ', 'c', 'i', 'n', 'q', 'u', 'a', 'n',
// 't', 'e', '+', 'e', 't', '+', 'u', 'n', '\0'};
//     ft_strcapitalize(myString);

// 	printf("%s", myString);
// }
