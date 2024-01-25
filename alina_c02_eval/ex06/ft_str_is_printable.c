/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilohub <alinabelogub1@gmal.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:19:37 by abilohub          #+#    #+#             */
/*   Updated: 2024/01/23 17:35:42 by abilohub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	check_printable(char c)
{
	if ((c >= ' ') && (c <= '~'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_printable(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello\tWorld!";

//     if (ft_str_is_printable(str1))
//         write(1, str1, sizeof(str1) - 1);
//     else
//         write(1, "Not printable\n", 15);

//     if (ft_str_is_printable(str2))
//         write(1, str2, sizeof(str2) - 1);
//     else
//         write(1, "Not printable\n", 15);

//     return 0;
// }
