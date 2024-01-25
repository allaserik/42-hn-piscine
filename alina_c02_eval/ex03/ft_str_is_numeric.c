/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilohub <alinabelogub1@gmal.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:18:02 by abilohub          #+#    #+#             */
/*   Updated: 2024/01/24 12:32:11 by abilohub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	check_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_numeric(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
//     char str1[] = "12345";
//     char str2[] = "42abc";

//     if (ft_str_is_numeric(str1))
//         write(1, str1, sizeof(str1) - 1);
//     else
//         write(1, "Not numeric\n", 12);

//     if (ft_str_is_numeric(str2))
//         write(1, str2, sizeof(str2) - 1);
//     else
//         write(1, "Not numeric\n", 12);

//     return 0;
// }
