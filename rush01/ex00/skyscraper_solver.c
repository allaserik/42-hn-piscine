/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_solver.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:37:17 by eallas            #+#    #+#             */
/*   Updated: 2024/01/28 12:34:41 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper_solver.h"

// Implement your Skyscraper solver algorithm here
// Function to solve the Skyscrapers puzzle
// Implement your solving algorithm here
// Use the input_string to set up the initial state of the board
// If a solution is found, return (1); otherwise, return 0.
//
// ./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down
// row1left row2left row3left row4left row1right row2right row3right row4right"
// ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
// 1 2 3 4$
// 2 3 4 1$
// 3 4 1 2$
// 4 1 2 3$

// Constants
#define SIZE 4
#define MIN_HEIGHT 1
#define MAX_HEIGHT 4
#define LEFT 'l'
#define RIGHT 'r'
#define UP 'u'
#define DOWN 'd'

// Function to check visibility
int	is_visible(int *line, int clues, int (*compare)(int, int))
{
	int	visible_count;
	int	max_height_seen;

	visible_count = 1;
	max_height_seen = line[0];
	for (int i = 1; i < SIZE; ++i)
	{
		if (compare(line[i], max_height_seen))
		{
			max_height_seen = line[i];
			++visible_count;
		}
	}
	return (visible_count == clues);
}

// Function to compare heights for visibility
int	compare_heights(int a, int b)
{
	return (a > b);
}

// Function to get a column from the board
int	*get_column(int **board, int col)
{
	static int	column[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		column[i] = board[i][col];
	}
	return (column);
}
// Function to reverse an array in-place
int	*reverse_array(int *arr, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		// Swap elements at start and end indices
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		// Move indices towards the center
		start++;
		end--;
	}
	return (arr);
}

// Function to check if the current state is valid
int	is_valid(int **board, int clues[SIZE * 2][SIZE], int row, int col)
{
	int	left_visible;
	int	right_visible;
	int	top_visible;
	int	bottom_visible;

	// Check visibility from the left
	left_visible = is_visible(board[row], clues[row][0], compare_heights);
	// Check visibility from the right
	right_visible = is_visible(reverse_array(board[row], SIZE), clues[row][1],
			compare_heights);
	// Check visibility from the top
	top_visible = is_visible(get_column(board, col), clues[col][2],
			compare_heights);
	// Check visibility from the bottom
	bottom_visible = is_visible(reverse_array(get_column(board, col), SIZE),
			clues[col][3], compare_heights);
	// Check all visibility conditions
	return (left_visible && right_visible && top_visible && bottom_visible);
}

// Solve recursively
int	solve_recursive(int **board, int clues[][SIZE], int row, int col)
{
	int next_row, next_col, height;
	if (row == SIZE)
	{
		return (is_valid(board, clues, row - 1, col - 1));
		// Check visibility when all rows are filled
	}
	next_row = (col + 1) % SIZE;
	next_col = (col + 1) / SIZE;
	height = MIN_HEIGHT;
	while (height <= MAX_HEIGHT)
	{
		board[row][col] = height;
		write_output("(solve_recursive)Trying height ");
		write_char_int(height);
		write_output(" at row ");
		write_char_int(row);
		write_output(", col ");
		write_char_int(col);
		write_output("\n");
		write_output("(solve_recursive)Current board state:\n");
		display_board(board);
		if (is_valid(board, clues, row, col))
		{
			write_output("(solve_recursive)Valid configuration!\n");
			if (solve_recursive(board, clues, next_row, next_col))
			{
				return (1); // Solution found
			}
		}
		else
		{
			write_output("(solve_recursive)Invalid configuration. Backtracking...\n");
		}
		height++;
	}
	// No valid height found, backtrack
	board[row][col] = 0;
	write_output("(solve_recursive)Backtracking at row ");
	write_char_int(row);
	write_output(", col ");
	write_char_int(col);
	write_output("\n");
	return (0); // No solution found
}

// Function to parse clues
void	parse_clues(const char *input_string, int clues[][SIZE])
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (input_string[i] != '\0')
	{
		if (input_string[i] >= '1' && input_string[i] <= '4')
		{
			clues[j / SIZE][j % SIZE] = input_string[i] - '0';
			++j;
		}
		++i;
	}
}
// Function to solve the Skyscraper puzzle using the given empty board and input_string
int	solve_skyscraper_puzzle(int **board, const char *input_string)
{
	int	clues[SIZE * 2][SIZE];
	int	result;

	write_output("(solve_puzzle)Solving puzzle...\n");
	parse_clues(input_string, clues);
	result = solve_recursive(board, clues, 0, 0);
	if (result)
	{
		write_output("(solve_puzzle)Solution found!\n");
		display_board(board);
	}
	else
	{
		write_output("(solve_puzzle)No solution found.\n");
		display_board(board);
	}
	return (result);
}
