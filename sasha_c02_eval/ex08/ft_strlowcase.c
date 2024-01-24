/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 23:00:15 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/22 23:15:59 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <unistd.h>
// int	main(void)
// {
// 	int t = 0;
// 	char source[] = "42SCHOoLISAWE$OME";
// 	char result[50];
// 	ft_strlowcase(source);

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