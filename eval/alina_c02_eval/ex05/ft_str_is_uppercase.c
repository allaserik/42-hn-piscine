/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilohub <alinabelogub1@gmal.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:05:36 by abilohub          #+#    #+#             */
/*   Updated: 2024/01/23 16:24:15 by abilohub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	check_upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_upper(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
//     char testString1[] = "ABCDEF";
//     char testString2[] = "Abcdef";

//     if (ft_str_is_uppercase(testString1))
//         write(1, "String 1 is uppercase\n", 22);
//     else
//         write(1, "String 1 is not uppercase\n", 26);

//     if (ft_str_is_uppercase(testString2))
//         write(1, "String 2 is uppercase\n", 22);
//     else
//         write(1, "String 2 is not uppercase\n", 26);
// }
