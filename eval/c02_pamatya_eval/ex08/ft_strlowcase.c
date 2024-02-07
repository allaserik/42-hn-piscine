/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:12:13 by pamatya           #+#    #+#             */
/*   Updated: 2024/01/31 15:58:04 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	string[] = "This is PROOF that this code just Works!";
// 	char	*str;

// 	str = &string[0];
// 	printf("%s\n", ft_strlowcase(str));
// }
