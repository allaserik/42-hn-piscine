/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etekeli <etekeli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:48:55 by etekeli           #+#    #+#             */
/*   Updated: 2024/02/04 09:56:35 by etekeli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	uppercase;
	int	i;

	uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			uppercase = 0;
		}
		i++;
	}
	return (uppercase);
}

// int main()
// {
// 	printf("%d", ft_str_is_uppercase("ERKAN"));
// 	return(0);
// }
