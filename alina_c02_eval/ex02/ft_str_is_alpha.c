/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilohub <alinabelogub1@gmal.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:24:11 by abilohub          #+#    #+#             */
/*   Updated: 2024/01/24 12:39:54 by abilohub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	check_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_alpha(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
//     char str1[] = "HelloWorld";
//     char str2[] = "Hello123";

//     if (ft_str_is_alpha(str1))
//         write(1, str1, sizeof(str1) - 1);
//     else
//         write(1, "Not alphabetic\n", 15);

//     if (ft_str_is_alpha(str2))
//         write(1, str2, sizeof(str2) - 1);
//     else
//         write(1, "Not alphabetic\n", 15);

//     return 0;
// }
