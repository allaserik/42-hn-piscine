/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:09:22 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 16:11:19 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strncpy (man strncpy).
 * Copy at most 'n' characters from source to destination
 * If 'n' is greater than the length of the source string,
 * pad with null characters
 * Return the original destination pointer
 */
char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
