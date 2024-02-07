/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:01:48 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 17:13:16 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
// void	ft_putnbr_base(int nbr, int base)
// {
// 	if (nbr == 0)
// 		ft_putchar('0');
// 	while (nbr != 0)
// 	{
// 		ft_putchar(nbr % base + '0');
// 		nbr /= base;
// 	}
// }

// /**
//  * Function that displays a string of characters onscreen.
//  * If this string contains characters that aren’t printable,
//  * they’ll have to be displayed in the shape of
//  * hexadecimals (lowercase), preceeded by a "backslash".
//  */
// void	ft_putstr_non_printable(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] < 32 || str[i] > 126)
// 		{
// 			ft_putchar('\\');
// 			ft_putnbr_base(str[i], 16);
// 		}
// 		else
// 			ft_putchar(str[i]);
// 		i++;
// 	}
// }
