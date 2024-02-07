/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:34:34 by eallas            #+#    #+#             */
/*   Updated: 2024/01/28 10:52:57 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implement your board-related functions here
#include "board_functions.h"

void	handle_memory_error(int **board)
{
	free_board(board);
	write_error("Memory allocation error");
	exit(EXIT_FAILURE);
}

void	initialize_board_zeros(int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	// Debug output
	// write_output("(board_functions)Zeroed board:\n");
	// display_board(board);
}

void	initialize_board(int ***board)
{
	int	i;

	*board = (int **)malloc(4 * sizeof(int *));
	if (*board == NULL)
		handle_memory_error(*board);
	i = 0;
	while (i < 4)
	{
		(*board)[i] = (int *)malloc(4 * sizeof(int));
		if ((*board)[i] == NULL)
			handle_memory_error(*board);
		i++;
	}
	initialize_board_zeros(*board);
	// Debug output
	// write_output("(board_functions)Initialized board:\n");
	// display_board(*board);
}

void	free_board(int **board)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(board[i]);
		i++;
	}
	free(board);
	board = NULL;
}
