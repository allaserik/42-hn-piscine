/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:05:00 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 12:06:59 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that counts and returns the number of characters in a string.
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * Main function for testing ft_strlen.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = "Hello World!";
// 	i = ft_strlen(str);
// 	printf("The length of the string is %d\n", i);
// 	return (0);
// }
