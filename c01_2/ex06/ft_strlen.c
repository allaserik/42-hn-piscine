/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:54:14 by eallas            #+#    #+#             */
/*   Updated: 2024/02/05 19:01:26 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that counts and returns the number of characters in a string.
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
