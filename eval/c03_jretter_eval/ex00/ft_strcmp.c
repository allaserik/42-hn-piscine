/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jretter <jretter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:04:40 by jretter           #+#    #+#             */
/*   Updated: 2024/02/05 10:17:40 by jretter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	printf("%d", ft_strcmp("Jochen", "Jochretter"));
//	printf("\n%d", ft_strcmp("Hello", "hkllo"));
//	printf("\n%d", ft_strcmp("Jochen", "och"));
//	printf("\n%d\n", ft_strcmp("Jochen", "Jochen"));
//}