/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:23:09 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/23 15:10:35 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 1;
	while (str[j] != '\0')
	{
		if (!(str[j] >= '0' && str[j] <= '9'))
		{
			i = 0;
		}
		j++;
	}
	return (i);
}

#include <unistd.h>

int	main(void)
{
	char source[] = "23424a.,232#$";
	char result = ft_str_is_numeric(source) + '0';
	write(1, &result, 1);
	return (0);
}
