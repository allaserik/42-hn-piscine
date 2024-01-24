/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilin <dilin@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:55:12 by dilin             #+#    #+#             */
/*   Updated: 2024/01/20 13:45:40 by dilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"
#include "rush.h"
#include <unistd.h>

void	rush(int x, int y)
{
	int	cursor_x;
	int	cursor_y;

	cursor_x = 1;
	cursor_y = 1;
	ft_print_rectangle(x, y, cursor_x, cursor_y);
}

// split up rush function into printing rectangle functions

void	ft_print_rectangle(int x, int y, int cursor_x, int cursor_y)
{
	while (cursor_y <= y)
	{
		while (cursor_x <= x)
		{
			ft_check_location(cursor_x, cursor_y, x, y);
			cursor_x++;
		}
		ft_putchar('\n');
		cursor_y++;
		cursor_x = 1;
	}
}

void	ft_check_location(int cursor_x, int cursor_y, int x, int y)
{
	if (cursor_x == 1 || cursor_x == x)
	{
		ft_check_corner_or_side(cursor_x, cursor_y, x, y);
	}
	else
	{
		ft_check_vertical_or_middle(cursor_x, cursor_y, x, y);
	}
}

void	ft_check_corner_or_side(int cursor_x, int cursor_y, int x, int y)
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

void	ft_check_vertical_or_middle(int cursor_x, int cursor_y, int x, int y)
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
