/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrebhar <ngrebhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:49:10 by ngrebhar          #+#    #+#             */
/*   Updated: 2024/01/24 12:24:48 by ngrebhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
#include <stdbool.h>

void	wiederholung(int n)
{
	if (n <= 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}

// int main()
// {
// 	wiederholung(3);
// 	return 0;
// }
