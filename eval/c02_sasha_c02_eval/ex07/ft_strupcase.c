/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:27:57 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/23 01:44:21 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'x' + 'X';
		}
		i++;
	}
	return (str);
}

// #include <unistd.h>
// int	main(void)
// {
// 	int t = 0;
// 	char source[] = "42schOolisAwe$ome";
// 	char result[50];
// 	ft_strupcase(source);

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