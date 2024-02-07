/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_write_functions.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:47:59 by eallas            #+#    #+#             */
/*   Updated: 2024/01/28 10:43:26 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUSTOM_WRITE_FUNCTIONS_H
# define CUSTOM_WRITE_FUNCTIONS_H

# include <unistd.h>

// Function prototypes for custom write functions
void	write_error(char *str);
void	write_output(char *str);
void	write_char_int(int i);

#endif
