/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etekeli <etekeli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:24:02 by etekeli           #+#    #+#             */
/*   Updated: 2024/01/31 17:24:59 by etekeli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
					&& str[i] <= 'Z')))
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

// int main(void)
// {
// 	char word1[]= "hallo";
// 	char word2[]= "HALLO";
// 	char word3[]= "1213$@";

// 	printf("%d\n", ft_str_is_alpha(word1));
// 	printf("%d\n", ft_str_is_alpha(word2));
// 	printf("%d\n", ft_str_is_alpha(word3));
// 	return(0);
// }
