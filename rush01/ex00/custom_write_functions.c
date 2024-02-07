/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_write_functions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:07:49 by eallas            #+#    #+#             */
/*   Updated: 2024/01/28 10:36:37 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "custom_string_functions.h"
#include "custom_write_functions.h"

// Write a string to standard output using write
void	write_output(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
}

// Write a string to standard error using write
void	write_error(char *str)
{
	write(STDERR_FILENO, str, ft_strlen(str));
}

// Custom write function for integers of one character

void	write_char_int(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}
