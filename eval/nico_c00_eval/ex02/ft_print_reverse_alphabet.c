/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrebhar <ngrebhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:03:50 by ngrebhar          #+#    #+#             */
/*   Updated: 2024/01/24 12:24:20 by ngrebhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_print_alphabet(void)
{
	int	start;
	int	end;
	int	current;

	start = 122;
	end = 97;
	current = start;
	while (current >= end)
	{
		write(1, &current, 1);
		current--;
	}
}

// int	main(){
// ft_print_alphabet();
// return 0;
// }
