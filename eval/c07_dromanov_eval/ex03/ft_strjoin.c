/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromanov <dromanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:26:53 by dromanov          #+#    #+#             */
/*   Updated: 2024/02/08 12:33:44 by dromanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_of_str_plus_sep_len_count(int size, char **strs, char *sep)
{
	int	line;
	int	i;
	int	total;

	total = 0;
	line = 0;
	if (size == 0)
		return (0);
	while (line < size)
	{
		i = 0;
		while (strs[line][i])
		{
			total++;
			i++;
		}
		line++;
	}
	while (*sep != 0)
	{
		sep++;
		total++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i_strs;
	int		i_res;
	int		i_sep;
	int		line;
	char	*res;

	i_res = 0;
	line = 0;
	res = malloc(ft_str_of_str_plus_sep_len_count(size, strs, sep) + 1);
	if (size == 0)
	{
		return (res);
	}
	while (line < size)
	{
		i_strs = 0;
		while (strs[line][i_strs])
			res[i_res++] = strs[line][i_strs++];
		i_sep = 0;
		while (sep[i_sep] && line + 1 != size)
			res[i_res++] = sep[i_sep++];
		line++;
	}
	res[i_res] = '\0';
	return (res);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char *strs[] = {"123", "865", "bhu"};

// 	// free(ft_strjoin(0, strs, "/"));
// 	printf("%s", ft_strjoin(3, strs, "/"));
// }