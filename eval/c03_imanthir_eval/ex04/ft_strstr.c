/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imanthir <imanthir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:01:35 by imanthir          #+#    #+#             */
/*   Updated: 2024/02/07 09:10:38 by imanthir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!*to_find)
	{
		return (str);
	}
	while (*str)
	{
		if (*str == to_find[i])
		{
			if (to_find[++i] == '\0')
			{
				return (str - i + 1);
			}
		}
		else
			i = 0;
		str++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*str = "India is a vast Country";
// 	char	*to_find = "kjhug";
// 	str = ft_strstr(str, to_find);
// 	printf("%s\n", str);
// 	return(0);
// }
