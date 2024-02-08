/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdering <wdering@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:27:59 by wdering           #+#    #+#             */
/*   Updated: 2024/02/08 13:49:56 by wdering          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		m;
	int		i;
	char	*s;

	m = 0;
	i = 0;
	s = src;
	while (*s++)
		m++;
	s = (char *)malloc(m);
	while (i < m)
	{
		s[i] = src[i];
		i++;
	}
	return (s);
}

// #include <unistd.h>
// void	ft_putstr(char *str)
// {
// 	while (*str)
// 	{
// 		write(1, str, 1);
// 		str++;
// 	}
// }
// int main(){
// 	char *str="dragonscales";
// 	char *dest=ft_strdup(str);
// 	ft_putstr(dest);
// 	//write(1, str-1, 1);
// 	//write(1, dest-1, 1);
// }