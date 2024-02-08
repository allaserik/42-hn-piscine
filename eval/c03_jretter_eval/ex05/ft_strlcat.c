/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jretter <jretter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:56:37 by jretter           #+#    #+#             */
/*   Updated: 2024/02/07 12:20:53 by jretter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlaenge;
	unsigned int	slaenge;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlaenge = j;
	slaenge = ft_strlen(src);
	if (size == 0 || size <= dlaenge)
		return (slaenge + size);
	while (src[i] != '\0' && i < size - dlaenge - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlaenge + slaenge);
}

//int	main(void)
//{
//	char	src[] = "jojo";
//	char	dest[30] = "_retter_jochen";

//	printf("%i \n", ft_strlcat(dest, src, 20));
//	printf("%s \n", dest);
//}