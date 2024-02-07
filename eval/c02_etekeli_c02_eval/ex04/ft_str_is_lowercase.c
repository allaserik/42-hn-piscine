/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:10:12 by etekeli           #+#    #+#             */
/*   Updated: 2024/02/05 14:06:05 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	lovercase;
	int	i;

	lovercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			lovercase = 0;
		}
		i++;
	}
	return (lovercase);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_lowercase("jfkg"));
// 	return (0);
// }
