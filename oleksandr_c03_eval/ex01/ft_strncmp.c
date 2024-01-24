/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obrittne <obrittne@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:02:31 by obrittne          #+#    #+#             */
/*   Updated: 2024/01/20 20:07:41 by obrittne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n)
	{
		if (!*s1 && !*s2)
		{
			return (0);
		}
		if (*s1 > *s2)
		{
			return (1);
		}
		if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*
int main() {
    char str1[] = "aba";
    char str2[] = "aa";

    int result = ft_strncmp(str1, str2, 2);

    if (result < 0) {
        printf("%s is lexicographically less than %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s is lexicographically greater than %s\n", str1, str2);
    } else {
        printf("%s is lexicographically equal to %s\n", str1, str2);
    }

    return 0;
}
*/