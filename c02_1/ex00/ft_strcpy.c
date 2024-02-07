/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:08:54 by eallas            #+#    #+#             */
/*   Updated: 2024/01/31 16:08:18 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Reproduce the behavior of the function strcpy (man strcpy).
 * Copy characters from source to destination until null terminator
 * is encountered
 * Return the original destination pointer
 */
char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
