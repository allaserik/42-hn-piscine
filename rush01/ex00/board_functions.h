/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:34:34 by eallas            #+#    #+#             */
/*   Updated: 2024/01/27 19:03:57 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_FUNCTIONS_H
# define BOARD_FUNCTIONS_H
# include "custom_write_functions.h"
# include "display_output.h"
# include <stdlib.h> // Include for malloc and free

// Function prototypes related to the game board
// Add your function prototypes here
void	handle_memory_error(int **board);
void	initialize_board_zeros(int **board);
void	initialize_board(int ***board);
void	free_board(int **board);

#endif
