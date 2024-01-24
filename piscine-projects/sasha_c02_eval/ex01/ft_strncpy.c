/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:54:18 by auplisas          #+#    #+#             */
/*   Updated: 2024/01/23 15:04:48 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
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
	char source[] = "Wazupamigo";
	char destination[20] = "Hello, World!";
	int size;
	int t;
	int x;

	t = 0;
	x = 0;
	size = 5;
	while (destination[x] != '\0')
	{
		write(1, &destination[x], 1);
		x++;
	}
	ft_strncpy(destination, source, size);
	while (destination[t] != '\0')
	{
		write(1, &destination[t], 1);
		t++;
	}
	return (0);
}
