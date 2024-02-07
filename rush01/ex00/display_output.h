/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_output.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:39:25 by eallas            #+#    #+#             */
/*   Updated: 2024/01/28 10:08:34 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_OUTPUT_H
# define DISPLAY_OUTPUT_H

# include "custom_write_functions.h"
# include <stdio.h>

// Function prototypes for output display
void	display_input_data(int argc, char *argv[]);

void	display_solution(int **board);
void	display_board(int **board);
void	display_board2(int **board);
void	write_output2(const char *message);

#endif
