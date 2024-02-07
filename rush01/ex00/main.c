/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 11:18:58 by eallas            #+#    #+#             */
/*   Updated: 2024/01/28 10:52:25 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This program solves the 4x4 Skyscrapers puzzle.
 *
 * Given a map of 4x4, place boxes of height 1 to 4 on each available square in
 * a way that every row and column sees the correct number of boxes from each
 * the possible points of view (left/right for rows, up/down for columns).
 *
 * Ex: The box of height 3 will hide the box of height 1 from the left, so we
 * have 3 visible boxes, and only one from the right, because the box of
 * height 4 is hiding everything.
 *
 * Each of the views (2 per row and 2 per column) will have a given value.
 * Your program must place the boxes correctly, while making sure each row
 * and column only has one box of each size.
 *
 * Output will contain the first solution encountered
 *
 * Allowed fucnctions: write, malloc, free
 * Source code will be compiled as follows:
 * cc -Wall -Wextra -Werror -o rush-01 *.c
 *
 * Usage:
 * ./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down
 * row1left row2left row3left row4left row1right row2right row3right row4right"
 *
 * "col1up" is the value for the left column upper point of view. Each of
 * these represent a characters string of values ranged between ’1’ and ’4’.
 *
 * This is the ONLY acceptable input for your program. Any other input must be
 * considered an error. Input needs to be validated before running the program.
 *
 * Here’s an example of intended input/output for a valid set.
 * ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
 * 1 2 3 4$
 * 2 3 4 1$
 * 3 4 1 2$
 * 4 1 2 3$
 *
 * In case of an error or if a solution cannot be found, an "Error" followed
 * by a line break will be displayed.
 *
 * Bonus points fo handling map sizes 5x5 ... 9x9.
 */

#include "main.h"

// Main function
// Validate input
// Display input data
// Initialize the board
// Solve the puzzle
// If not solveable, then show error message, free memory and exit
// If solved, then display solution, free memory and exit
int	main(int argc, char *argv[])
{
	int	**board;

	if (!is_input_valid(argc, argv))
	{
		write_error("\n");
		return (1);
	}
	display_input_data(argc, argv);
	initialize_board(&board);
	write_output("(main)Initial board:\n");
	display_board(board);
	write_output("\n");
	solve_skyscraper_puzzle(board, argv[1]);
	free_board(board);
	return (0);
}
