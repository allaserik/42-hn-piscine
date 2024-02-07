/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgreau <lgreau@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:01:16 by lgreau            #+#    #+#             */
/*   Updated: 2024/02/01 20:23:11 by lgreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_putdigit(char d)
{
	write(1, &d, 1);
}

void	ft_putnbr(int nb)
{
	int	r;

	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			ft_putnbr(nb / 10);
			ft_putdigit(-1 * (nb % 10) + '0');
			return ;
		}
		write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	r = nb % 10;
	ft_putdigit(r + '0');
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str != NULL)
	{
		ft_putstr((*par).str);
		write(1, "\n", 1);
		ft_putnbr((*par).size);
		write(1, "\n", 1);
		ft_putstr((*par).copy);
		write(1, "\n", 1);
		par++;
	}
}

// int main(int argc, char *argv[])
// {
// 	t_stock_str	*array = ft_strs_to_tab(argc, argv);
// 	ft_show_tab(array);
// 	return 0;
// }
