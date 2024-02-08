/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdieterl <wdieterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:22:45 by wdieterl          #+#    #+#             */
/*   Updated: 2024/02/07 15:46:15 by wdieterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	total_len(int size, char **strs, char *sep)
{
	int	n;
	int	i;
	int	total_len;

	n = 0;
	total_len = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i] != '\0')
			i++;
		total_len += i;
		if (n < size - 1)
		{
			i = 0;
			while (*sep != '\0')
				sep++;
			total_len += i;
		}
		n++;
	}
	return (total_len);
}

void	copy_strings(char *concatenated_str, int size, char **strs, char *sep)
{
	int		n;
	char	*str;
	char	*sep_ptr;

	n = 0;
	while (n < size)
	{
		str = strs[n];
		while (*str)
			*concatenated_str++ = *str++;
		if (n < size - 1)
		{
			sep_ptr = sep;
			while (*sep_ptr)
				*concatenated_str++ = *sep_ptr++;
		}
		n++;
	}
	*concatenated_str = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concatenated_str;

	if (size == 0)
	{
		concatenated_str = (char *)malloc(1);
		*concatenated_str = '\0';
		return (concatenated_str);
	}
	concatenated_str = (char *)malloc(total_len(size, strs, sep) + 1);
	if (concatenated_str == NULL)
		return (NULL);
	copy_strings(concatenated_str, size, strs, sep);
	return (concatenated_str);
}

/* int	main(void)
{
	int		size;
	char	*strs[] = {"hello", "world", "!"};
	char	*sep;
	char	*result;

	sep = ", ";
	size = 3;
	result = ft_strjoin(size, strs, sep);
	printf("%s", result);
	free(result);
} */
