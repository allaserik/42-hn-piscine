/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_output.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:07:32 by eallas            #+#    #+#             */
/*   Updated: 2024/01/28 10:48:49 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_output.h"

// Function to display the input data
void	display_input_data(int argc, char *argv[])
{
	write_output("Input data:\n");
	write_output("argc: ");
	write_char_int(argc);
	write_output("\n");
	write_output("argv[0]: ");
	write_output(argv[0]);
	write_output("\n");
	write_output("argv[1]: ");
	write_output(argv[1]);
	write_output("\n");
}

// Function to display the 4x4 board
void	display_board(int **board)
{
	int i, j;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write_char_int(board[i][j]);
			if (j < 3)
				write_output(" ");
			j++;
		}
		write_output("\n");
		i++;
	}
}
// Function to display the solved board
void	display_solution(int **board)
{
	write_output("Solution:\n");
	display_board(board);
}

void	display_board2(int **board)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
}

void	write_output2(const char *message)
{
	printf("%s", message);
}
