/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:31:04 by eallas            #+#    #+#             */
/*   Updated: 2024/02/06 15:06:28 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_compute_final_length(int size, char **strings, int sep_length);

/**
 * Function that will concatenate all the strings pointed by strs separated by
 * sep.
 * • size is the number of strings in strs
 * • if size is 0, you must return an empty string that you can free().
 *
 * Solution:
 * Calculate the total length required for the concatenated string
 * add up the lengths of all the strings
 * add length or space for all the separators needed
 * Allocate memory
 * Copy each character of the current string
 * Add separator if it's not the last string
 * Null-terminate the concatenated string
 */
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		index;
	char	*string;
	char	*d;

	if (size == 0)
	{
		string = (char *)malloc(sizeof(char));
		if (!string)
			return (NULL);
		*string = '\0';
		return (string);
	}
	total_length = ft_compute_final_length(size, strs, ft_strlen(sep));
	d = (string = (char *)malloc((total_length + 1) * sizeof(char)));
	if (!d)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(d, strs[index]);
		d += ft_strlen(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		index++;
	}
	*d = '\0';
	return (string);
}

/**
 * Function computes the length of the string.
 */
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/**
 * Function that copies characters from source to destination until null
 * terminator is encountered. Returns the given destination pointer.
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * Function computes the final length of the concatenated string.
 * It adds up the lengths of all strings and separators.
 */
int	ft_compute_final_length(int size, char **strings, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_strlen(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

/**
 * Main function for testing ft_strjoin function.
 */
// #include <stdio.h>

// int	main(void)
// {
// 	char	*strs[] = {"Hello", "world", "from", "strjoin"};
// 	char	*sep;
// 	char	*result;

// 	sep = " - ";
// 	result = ft_strjoin(4, strs, sep);
// 	printf("Concatenated string: %s\n", result);
// 	free(result); // Free the allocated memory
// 	return (0);
// }
