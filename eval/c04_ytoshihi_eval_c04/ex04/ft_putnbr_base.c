/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoshihi <ytoshihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:47:50 by ytoshihi          #+#    #+#             */
/*   Updated: 2024/01/31 12:17:08 by ytoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_len(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	check_if_no_twice(char *str)
{
	unsigned int	str_count;
	unsigned int	count;

	str_count = 0;
	count = 0;
	while (str[str_count])
	{
		while (str[count])
		{
			if (str_count == count)
			{
				count++;
				continue ;
			}
			if (str[str_count] == str[count])
				return (0);
			count++;
		}
		count = 0;
		str_count++;
	}
	return (1);
}

int	check_if_no_sign(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] == '+' || str[count] == '-')
			return (0);
		count++;
	}
	return (1);
}

void	putnbr(int nb, int base_num, char *base_str)
{
	char	print_value;

	if (nb / base_num > 0)
		putnbr(nb / base_num, base_num, base_str);
	if (nb % base_num > 10)
	{
		print_value = base_str[nb % base_num];
	}
	else
	{
		print_value = base_str[nb % base_num];
	}
	write(1, &print_value, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_num;
	int		sign;
	char	minus;

	minus = '-';
	sign = 1;
	if (nbr < 0)
		sign = -1;
	if (get_len(base) <= 1 || !check_if_no_twice(base)
		|| !check_if_no_sign(base))
		return ;
	if (sign == -1)
	{
		write(1, &minus, 1);
		nbr = nbr * sign;
	}
	base_num = get_len(base);
	putnbr(nbr, base_num, base);
}

// int	main(void)
// {
// 	char	*random;
// 	char	*hexadecimal;
// 	char	*decimal;
// 	char	*octal;
// 	char	*binary;
// 	int		num;

// 	random = "abcdefghijklmn";
// 	hexadecimal = "0123456789ABCDEF";
// 	decimal = "0123456789";
// 	octal = "poneyvif";
// 	binary = "012";
// 	num = -16;
// 	ft_putnbr_base(num, binary);
// 	return (0);
// }
