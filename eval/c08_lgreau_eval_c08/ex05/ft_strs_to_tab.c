/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgreau <lgreau@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:03:30 by lgreau            #+#    #+#             */
/*   Updated: 2024/02/05 13:27:40 by lgreau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	offset;

	offset = 0;
	while (src[offset] != '\0')
	{
		dest[offset] = src[offset];
		offset++;
	}
	dest[offset] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dup;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	dup = malloc(src_len * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					offset;
	struct s_stock_str	*stock_array;

	stock_array = malloc((ac + 1) * sizeof(struct s_stock_str));
	offset = 0;
	while (offset < ac)
	{
		stock_array[offset].size = ft_strlen(av[offset]);
		stock_array[offset].str = ft_strdup(av[offset]);
		stock_array[offset].copy = ft_strdup(av[offset]);
		offset++;
	}
	stock_array[offset].str = NULL;
	return (stock_array);
}

// int	main(int argc, char **argv)
// {
// 	t_stock_str	*array;
// 	int			i;

// 	i = 0;
// 	array = ft_strs_to_tab(argc - 1, argv + 1);
// 	if (array == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}
// 	while (array[i].str != 0)
// 		array[i++].copy[0] = 'a';
// 	ft_show_tab(array);
// 	i = 0;
// 	while (array[i].str != 0)
// 	{
// 		if (array[i].copy != NULL)
// 			free(array[i].copy);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }
