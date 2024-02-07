/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubsame <mrubsame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:01:59 by mrubsame          #+#    #+#             */
/*   Updated: 2024/01/28 19:45:32 by mrubsame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}
/*
int	main(void)
{
	char	*str;
	int		out;

	str = "42Heilbronn";
	ft_strlen(str);
	out = ft_strlen(str);
	printf("%d", out);
	return (0);
}
*/