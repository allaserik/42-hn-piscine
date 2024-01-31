/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalache <khalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:21:59 by khalache          #+#    #+#             */
/*   Updated: 2024/01/25 16:45:50 by khalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int main() 
// {
// char String[] = "Kris";
// ft_putstr(String);
// return (0);
// }