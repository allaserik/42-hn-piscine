/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:10:05 by eallas            #+#    #+#             */
/*   Updated: 2024/02/08 14:07:31 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Computes the length of a string.
 * @param s: The input string.
 * @return The length of the string.
 */
unsigned int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * Checks if a given string represents a valid base.
 * @param base: The string representing the base.
 * @return 1 if the base is valid, 0 otherwise.
 */
int	ft_is_valid_base(char *base)
{
	int	i;
	int	a;

	if (ft_strlen(base) < 2)
		return (0);
	i = -1;
	while (base[++i])
	{
		a = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] == '\t'
			|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r' || base[i] == ' ')
			return (0);
		while (base[a])
		{
			if (base[a] == base[i])
				return (0);
			a++;
		}
	}
	return (1);
}

/**
 * Checks if a character is present in a given base.
 * @param c: The character to be checked.
 * @param base: The string representing the base.
 * @return 1 if the character is in the base, 0 otherwise.
 */
int	ft_is_character_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (1);
	return (0);
}

/**
 * Gets the index of a character in a given base.
 * @param c: The character.
 * @param base: The string representing the base.
 * @return The index of the character in the base.
 */
int	ft_get_character_index(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (0);
}

/**
 * Converts a string representation of a number to an integer in a given base.
 * @param str: The string to be converted.
 * @param base: The base of the number system.
 * @return The integer representation of the string in the specified base.
 */
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	negative;

	i = 0;
	nb = 0;
	negative = 1;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v')
		|| (str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			negative *= -1;
	if (!ft_is_character_in_base(str[i], base))
		return (0);
	i = i - 1;
	while (ft_is_character_in_base(str[++i], base))
		nb = nb * ft_strlen(base) + (ft_get_character_index(str[i], base)
				/ ft_strlen(base)) + (ft_get_character_index(str[i], base)
				% ft_strlen(base));
	return (nb * negative);
}
