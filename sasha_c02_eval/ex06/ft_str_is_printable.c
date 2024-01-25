/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auplisas <auplisas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:51:31 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/23 01:43:33 by auplisas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	i = 1;
	while (str[j] != '\0')
	{
		if (!(str[j] >= 32 && str[j] <= 126))
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
// 	char source[] = "	forty	two";
// 	char result = ft_str_is_printable(source) + '0';
// 	write(1, &result, 1);
// 	return (0);
// }