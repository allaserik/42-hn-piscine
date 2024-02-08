/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jretter <jretter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:37:54 by jretter           #+#    #+#             */
/*   Updated: 2024/02/07 10:00:35 by jretter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

//int	main(void)
//{
//	char	finde[] = "jochen";
//	char	gross[] = "_retter_jochen";
//	char	finde1[] = "jochen";
//	char	gross1[] = "_retter_jochen";
//	printf("eigen %s\n", ft_strstr(gross, finde));
//	printf("bibliothek %s\n", strstr(gross1, finde1));
//	return (0);
//}