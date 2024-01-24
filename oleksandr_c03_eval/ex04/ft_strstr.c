/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obrittne <obrittne@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:51:15 by obrittne          #+#    #+#             */
/*   Updated: 2024/01/21 14:34:03 by obrittne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_if_same(char *str, char *to_find)
{
	char	*copy1;
	char	*copy2;

	copy1 = str;
	copy2 = to_find;
	while (*copy1 && *copy2)
	{
		if (*copy1 != *copy2)
			return (0);
		copy1++;
		copy2++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*copy1;
	char	*copy2;

	copy1 = str;
	while (*copy1)
	{
		if (check_if_same(copy1, to_find))
		{
			return (copy1);
		}
		copy1++;
	}
	return ("\0");
}

/*
int main(){
	char *str = "I hate bananas";
	char *to_find = "hate";

	printf("%s\n", ft_strstr(str, to_find));
}
*/