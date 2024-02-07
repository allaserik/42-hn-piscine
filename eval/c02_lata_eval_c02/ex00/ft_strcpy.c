/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmezock- <lmezock-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:44:12 by lmezock-          #+#    #+#             */
/*   Updated: 2024/01/31 11:59:19 by lmezock-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
// int main()
// {
// 	char src[] = "my name is nakis";
// 	char dest[20] = "";
// 	ft_strcpy(dest, src);
// 	printf("%s", dest);
// 	return(0);
// }