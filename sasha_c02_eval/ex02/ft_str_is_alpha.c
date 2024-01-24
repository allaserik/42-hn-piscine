/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:47:32 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/23 15:07:16 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 1;
	while (str[j] != '\0')
	{
		if (!((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a'
					&& str[j] <= 'z')))
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
	char source[] = "fdsffdfddsf";
	char result = ft_str_is_alpha(source) + '0';
	write(1, &result, 1);
	return (0);
}
