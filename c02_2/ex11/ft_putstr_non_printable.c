/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:01:48 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:08:35 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Function to write a character.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * function to write a number in base 16.
 */
void	ft_putnbr_base(int nbr, int base)
{
	int		remainder;
	char	digit;

	if (nbr == 0)
		ft_putchar('0');
	else
	{
		while (nbr != 0)
		{
			remainder = nbr % base;
			if (remainder < 10)
				digit = remainder + '0';
			else
				digit = remainder - 10 + 'a';
			ft_putchar(digit);
			nbr /= base;
		}
	}
}

/**
 * Function that displays a string of characters onscreen.
 * If this string contains characters that aren’t printable,
 * they’ll have to be displayed in the shape of
 * hexadecimals (lowercase), preceeded by a "backslash".
 */
void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_putnbr_base(str[i], 16);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/**
 * Main function for testing ft_putstr_non_printable().
 */

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello, \t World!\nThis is a \x01 non-printable character.";

// 	// Test case
// 	// Display original string
// 	printf("Original String: %s\n", str);
// 	printf("\n");
// 	// Apply ft_putstr_non_printable
// 	printf("Modified String: ");
// 	ft_putstr_non_printable(str);
// 	printf("\n");
// 	return (0);
// }
