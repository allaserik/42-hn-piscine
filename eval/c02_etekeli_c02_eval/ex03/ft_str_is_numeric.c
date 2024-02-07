/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:34:52 by etekeli           #+#    #+#             */
/*   Updated: 2024/02/05 14:05:37 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		j;
	char	k;

	i = 0;
	j = 1;
	while (*(str + i) != '\0')
	{
		k = *(str + i);
		if (k < '0' || k > '9')
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_numeric("123123"));
// 	return (0);
// }
