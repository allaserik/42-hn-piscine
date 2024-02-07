/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepple <fepple@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:27:23 by fepple            #+#    #+#             */
/*   Updated: 2024/01/31 12:55:00 by fepple           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strcpy(char *str)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = str[i];
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	res = malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strcpy(av[i]);
		if (!res[i].copy)
			return (NULL);
		i++;
	}
	res[i].size = 0;
	res[i].str = NULL;
	res[i].copy = NULL;
	return (res);
}
