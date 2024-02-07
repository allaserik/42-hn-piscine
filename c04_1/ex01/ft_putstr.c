/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:07:55 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 12:14:07 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function that displays a string of characters on the standard output.
 */
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/**
 * Main function to test ft_putstr function.
 */
// int	main(void)
// {
// 	char	*str;

// 	str = "Hello World!\n";
// 	ft_putstr(str);
// 	return (0);
// }
