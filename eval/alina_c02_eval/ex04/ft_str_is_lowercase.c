/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilohub <alinabelogub1@gmal.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:31:40 by abilohub          #+#    #+#             */
/*   Updated: 2024/01/23 17:33:18 by abilohub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	check_lower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_lower(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
//     char testString1[] = "abcdef";
//     char testString2[] = "Abcdef";

//     if (ft_str_is_lowercase(testString1))
//         write(1, "String 1 is lowercase\n", 22);
//     else
//         write(1, "String 1 is not lowercase\n", 26);

//     if (ft_str_is_lowercase(testString2))
//         write(1, "String 2 is lowercase\n", 22);
//     else
//         write(1, "String 2 is not lowercase\n", 26);

//     return 0;
// }
