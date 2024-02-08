/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdering <wdering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:17:39 by wdering           #+#    #+#             */
/*   Updated: 2024/02/08 13:45:11 by wdering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	m;
	unsigned int	n;

	m = 0;
	n = 0;
	while (dest[m])
		m++;
	while (*src)
	{
		dest[m + n] = *src;
		n++;
		src++;
	}
	dest[m + n] = '\0';
	return (dest);
}

int	calc_size(int size, char **strs, char *sep)
{
	int		m;
	int		n;
	int		i;
	char	*a;

	n = 0;
	while (*(sep + n))
		n++;
	m = n * size;
	n = 0;
	i = 0;
	while (i < size)
	{
		while (strs[i][n])
			n++;
		m = m + n;
		n = 0;
		i++;
	}
	return (m);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*a;

	a = (char *)malloc(calc_size(size, strs, sep) + 1);
	if (size == 0)
		return (a);
	ft_strcat(a, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(a, sep);
		ft_strcat(a, strs[i]);
		i++;
	}
	return (a);
}

// #include <unistd.h>
// int main ()
// {
// 	char *args[4]={"qwerrt","afhfa","affaa","dsa"};
// 	char *a = ft_strjoin(0 ,args, " , ");
// 	while( *a){
// 		write(1, a, 1);
// 		a++;
// 	}
// 	free(ft_strjoin(0 ,args, " , "));
// }
