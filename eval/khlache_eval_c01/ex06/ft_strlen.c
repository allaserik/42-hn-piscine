/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalache <khalache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:56:00 by khalache          #+#    #+#             */
/*   Updated: 2024/01/25 16:41:27 by khalache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
// #include <stdio.h>
// int main ()
// {
// char str[] = "Kriskata, top";
// int length;
// length = ft_strlen(str);
// printf("Length of the string: %d\n", length);
// return(0);
// }