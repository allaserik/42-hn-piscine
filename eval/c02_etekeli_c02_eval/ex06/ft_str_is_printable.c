/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etekeli <etekeli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:06:41 by etekeli           #+#    #+#             */
/*   Updated: 2024/02/05 11:55:50 by etekeli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

// int main()
// {
// 	printf ("%d", ft_str_is_printable("jhu1*/"));
// 	return(0);
// }
