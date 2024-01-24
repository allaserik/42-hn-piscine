/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:12:13 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/23 15:02:03 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <unistd.h>

int	main(void)
{
	char destination[5];
	char source[] = "Overflow";
	int t;
	int x;

	t = 0;
	x = 0;
	while (destination[x] != '\0')
	{
		write(1, &destination[x], 1);
		x++;
	}
	ft_strcpy(destination, source);
	while (destination[t] != '\0')
	{
		write(1, &destination[t], 1);
		t++;
	}
	return (0);
}
