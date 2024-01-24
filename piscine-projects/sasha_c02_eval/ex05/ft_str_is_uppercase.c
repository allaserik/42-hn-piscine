/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:20:14 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/23 01:42:44 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 1;
	while (str[j] != '\0')
	{
		if (!(str[j] >= 'A' && str[j] <= 'Z'))
		{
			i = 0;
		}
		j++;
	}
	return (i);
}

// #include <unistd.h>
// int	main(void)
// {
// 	char source[] = "abcdefg";
// 	char result = ft_str_is_uppercase(source) + '0';
// 	write(1, &result, 1);
// 	return (0);
// }