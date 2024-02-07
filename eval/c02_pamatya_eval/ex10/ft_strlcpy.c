/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:11:37 by pamatya           #+#    #+#             */
/*   Updated: 2024/02/05 18:30:14 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	scount(char *str);
void			copyn(char *dest, char *src, unsigned int x);

// Function to count the size of string
unsigned int	scount(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// Function to copy src to dest till the position x
void	copyn(char *dest, char *src, unsigned int x)
{
	unsigned int	i;

	i = 0;
	while (i < (x - 1))
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= x)
	{
		dest[i] = '\0';
		i++;
	}
}
// Hello, World!

// REQUIRED FUNCTION
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;
	unsigned int	size_dst;

	size_src = scount(src);
	size_dst = scount(dest);
	i = 0;
	if (size_src < size)
	{
		copyn(dest, src, size_src + 1);
	}
	else if (size_src >= size)
	{
		copyn(dest, src, size);
	}
	return (size_src);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char			*src;
// 	char			dst[30] = "yyyyyyyyyyyyyyyyyyyy";
// 	char			dest[30] = "yyyyyyyyyyyyyyyyyyyy";
// 	unsigned int	n;
// 	unsigned int	l;

// 	src = "Cheese!";
// 	n = 10;
// 	printf("Original string =				%s\n", src);

// 	l = strlcpy(&(dst[0]), src, n);
// 	printf("Result from strlcpy: 	dst = 	%s\n", &dst[0]);
// 	printf("Return value strcpy: dest = 	%d\n", l);

// 	l = ft_strlcpy(&(dest[0]), src, n);
// 	printf("Result from ft_strcpy: dest = 	%s\n", &dest[0]);
// 	printf("Return value ft_strcpy: dest = 	%d\n", l);

// 	// printf("Size of dest %d\n", scount(dest));
// 	// printf("Size of dst %d\n", scount(dst));
// 	// printf("Size of src %d\n", scount(src));
// 	return (0);
// }
