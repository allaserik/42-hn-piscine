/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:57:28 by eahn              #+#    #+#             */
/*   Updated: 2024/01/27 17:52:19 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Please find me a happy dog";
// 	char to_find1[] = "happy";
// 	char to_find2[] = "hapy";
// 	char to_find3[] = "";

// 	printf("test 1: %s\n", ft_strstr(str, to_find1));
// 	printf("test 2: %s\n", ft_strstr(str, to_find2));
// 	printf("test 3: %s\n", ft_strstr(str, to_find3));
// }