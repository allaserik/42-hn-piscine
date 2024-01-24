/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilin <dilin@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:55:12 by dilin             #+#    #+#             */
/*   Updated: 2024/01/21 19:26:41 by dilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int cursor_x, int cursor_y, int x, int y)
{
	if (cursor_x == 1 || cursor_x == x)
	{
		if (cursor_y == 1 || cursor_y == y)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('|');
		}
	}
	else
	{
		if (cursor_y == 1 || cursor_y == y)
		{
			ft_putchar('-');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	print_line(int cursor_x, int cursor_y, int x, int y)
{
	while (cursor_x <= x)
	{
		print_char(cursor_x, cursor_y, x, y);
		cursor_x++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	cursor_x;
	int	cursor_y;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	cursor_x = 1;
	cursor_y = 1;
	while (cursor_y <= y)
	{
		print_line(cursor_x, cursor_y, x, y);
		cursor_y++;
	}
}
