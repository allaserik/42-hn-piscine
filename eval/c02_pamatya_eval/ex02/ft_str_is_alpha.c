/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamatya <pamatya@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 21:48:58 by pamatya           #+#    #+#             */
/*   Updated: 2024/02/05 17:17:33 by pamatya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
					&& str[i] <= 'z')))
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
// 	count = ft_str_is_alpha(str);
// 	printf("%d\n", count);

// 	return (0);
// }
