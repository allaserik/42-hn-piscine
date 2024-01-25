/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrebhar <ngrebhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:29:24 by ngrebhar          #+#    #+#             */
/*   Updated: 2024/01/24 12:24:34 by ngrebhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_print_numbers(void)
{
	int	start;
	int	end;
	int	current;

	start = 48;
	end = 57;
	current = start;
	while (current <= end)
	{
		write(1, &current, 1);
		current++;
	}

}
	// int main()
	// {
	// ft_print_numbers();
	// return 0;
	// }
