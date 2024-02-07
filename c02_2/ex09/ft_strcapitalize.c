/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:24:06 by eallas            #+#    #+#             */
/*   Updated: 2024/02/01 13:06:54 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that checks if a character is a letter or a number.
 * Checks if a character is a letter or a number then returns 1.
 * Otherwise returns 0.
 */
int	ft_char_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

/**
 * Function that checks if a character is lowercase.
 */
int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * Function that checks if a character is uppercase.
 */
int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/**
 * Function that capitalizes the first letter of each word and transforms all
 * other letters to lowercase.
 * A word is a string of alphanumeric characters.
 *
 */
char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i] != '\0')
	{
		if (is_new_word == 1 && ft_char_is_lowercase(str[i]))
			str[i] = str[i] - 32;
		else if (is_new_word == 0 && ft_char_is_uppercase(str[i]))
			str[i] = str[i] + 32;
		if (!ft_char_is_alphanumeric(str[i]))
			is_new_word = 1;
		else
			is_new_word = 0;
		i++;
	}
	return (str);
}
/**
 * Main function to test the function ft_strcapitalize.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char test[] = "salut,
// 			comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	// Test case
// 	// Display original string
// 	printf("Original: %s\n", test);
// 	// Apply ft_strcapitalize
// 	ft_strcapitalize(test);
// 	// Display result
// 	printf("Result: %s\n", test);
// 	return (0);
// }
