/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrebhar <ngrebhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:13:58 by ngrebhar          #+#    #+#             */
/*   Updated: 2024/01/24 12:24:06 by ngrebhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_print_alphabet(void)
{
	int	start;
	int	end;
	int	current;

	start = 97;
	end = 122;
	current = start;
	while (current <= end)
	{
		write(1, &current, 1);
		current++;
	}
}

// int	main()
// {
// 	ft_print_alphabet();
// 	return 0;
// }
