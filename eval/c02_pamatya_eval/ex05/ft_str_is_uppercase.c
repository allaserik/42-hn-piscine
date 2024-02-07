/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 22:12:13 by pamatya           #+#    #+#             */
/*   Updated: 2024/01/31 15:56:06 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			count++;
		}
		i++;
	}
	if (count == 0)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str;
// 	int		count;

// 	str = "";
// 	count = ft_str_is_uppercase(str);
// 	printf("%d\n", count);
// }
