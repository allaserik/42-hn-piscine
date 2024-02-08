/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:53:47 by eallas            #+#    #+#             */
/*   Updated: 2024/02/08 14:03:44 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * Create a function that returns the result of the conversion of the
 * string nbr from a base base_from to a base base_to.
 * • nbr, base_from, base_to may be not writable.
 * • nbr will follow the same rules as ft_atoi_base (from an other module).
 * Beware of ’+’, ’-’ and whitespaces.
 * • The number represented by nbr must fit inside an int.
 * • If a base is wrong, NULL should be returned.
 * • The returned number must be prefix only by a single and uniq ’-’
 * if necessary, no whitespaces, no ’+’.
 */

unsigned int	ft_strlen(char *s);
int				ft_is_valid_base(char *base);
int				ft_is_character_in_base(char c, char *base);
int				ft_get_character_index(char c, char *base);
int				ft_atoi_base(char *str, char *base);

/**
 * Calculates the number of digits required to represent a number in a
 * given base.
 * @param i: The number for which digits need to be calculated.
 * @param base: The base of the number system.
 * @return The number of digits required.
 */
int	ft_get_number_of_digits(unsigned int i, char *base)
{
	int	b;

	b = 0;
	while (i >= ft_strlen(base))
	{
		i = i / ft_strlen(base);
		b++;
	}
	return (++b);
}

/**
 * Calculates the number of digits required to represent a number in a
 * given base.
 * @param i: The number for which digits need to be calculated.
 * @param base: The base of the number system.
 * @return The number of digits required.
 */
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	nb;
	int				nbneg;
	char			*res;
	int				i;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (0);
	nbneg = ft_atoi_base(nbr, base_from);
	if (nbneg < 0)
		nb = -nbneg;
	else
		nb = nbneg;
	i = ft_get_number_of_digits(nb, base_to) + ((nbneg < 0));
	res = malloc(sizeof(char) * (i + 1));
	res[i] = 0;
	while (i--)
	{
		res[i] = base_to[nb % ft_strlen(base_to)];
		nb = nb / ft_strlen(base_to);
	}
	if (nbneg < 0)
		res[0] = '-';
	return (res);
}
