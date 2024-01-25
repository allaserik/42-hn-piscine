/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 01:23:02 by ademiroz          #+#    #+#             */
/*   Updated: 2024/01/25 16:35:48 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	*name;

	name = "Abdurrahman Demiroez1\n";
	ft_putstr(name);
	ft_putstr("Abdurrahman Demiroez2\n");
	// write(1, '3', 1);
	write(1, name, strlen(name));
	return (0);
}
