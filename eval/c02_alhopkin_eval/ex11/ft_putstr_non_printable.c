/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhopkin <alhopkin@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:48:35 by alhopkin          #+#    #+#             */
/*   Updated: 2024/02/08 11:14:32 by alhopkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			hex[0] = "0123456789abcdef"[(*str) / 16];
			hex[1] = "0123456789abcdef"[(*str) % 16];
			ft_putchar(hex[0]);
			ft_putchar(hex[1]);
		}
		str++;
	}
}
