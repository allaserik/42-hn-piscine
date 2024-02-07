#include <stdlib.h>
#include <unistd.h>

/* Constants for grid size and number of hints */
const int	GRID_SIZE = 4;
const int	NUM_HINTS = GRID_SIZE * 4;
/* Function prototypes */
void		print_grid(int grid[GRID_SIZE][GRID_SIZE]);
int			is_number_in_line(int grid[GRID_SIZE][GRID_SIZE], int row, int col,
				int number);
int			count_visible_boxes(int line[GRID_SIZE], int direction);
int			check_line_visibility(int line[], int hint_from_start,
				int hint_from_end);
int			check_visibility(int grid[GRID_SIZE][GRID_SIZE],
				int hints[NUM_HINTS]);
int			solve_puzzle(int grid[GRID_SIZE][GRID_SIZE], int hints[NUM_HINTS],
				int pos);
void		read_hints_from_args(int hints[NUM_HINTS], char *argv[]);
/* Print the grid to standard output */
void	print_grid(int grid[GRID_SIZE][GRID_SIZE])
{
	char	buffer[GRID_SIZE * 2 + 2];
	int		i;
	int		j;
	int		buf_index;

	buf_index = 0;
	j = 0;
	i = 0;
	while (i < GRID_SIZE)
	{
		buf_index = 0, j = 0;
		while (j < GRID_SIZE)
		{
			buffer[buf_index++] = grid[i][j] + '0';
			buffer[buf_index++] = ' ';
			j++;
		}
		buffer[buf_index - 1] = '\n';
		write(STDOUT_FILENO, buffer, buf_index);
		i++;
	}
}
/* Check if a given number is in the specified row or column,
	using while loops */
int	is_number_in_line(int grid[GRID_SIZE][GRID_SIZE], int row, int col,
		int number)
{
	int	index;

	index = 0;
	while (index < GRID_SIZE)
	{
		if (grid[row][index] == number || grid[index][col] == number)
		{
			return (1);
		}
		index++;
	}
	return (0);
}
/* Count visible boxes from a given direction,
	adhering to the loop restriction */
int	count_visible_boxes(int line[GRID_SIZE], int direction)
{
	int	visible_count;
	int	max_height_seen;
	int	index;

	visible_count = 0;
	max_height_seen = 0;
	index = (direction == 0) ? 0 : GRID_SIZE - 1;
	while ((direction == 0 && index < GRID_SIZE) || (direction != 0
			&& index >= 0))
	{
		if (line[index] > max_height_seen)
		{
			max_height_seen = line[index];
			visible_count++;
		}
		index += (direction == 0) ? 1 : -1;
	}
	return (visible_count);
}
/* Check if the visibility from both ends of a line matches the hints,
	using while loops */
int	check_line_visibility(int line[], int hint_from_start, int hint_from_end)
{
	return (count_visible_boxes(line, 0) == hint_from_start
		&& count_visible_boxes(line, 1) == hint_from_end);
}
/* Validate the visibility of all lines against the hints */
int	check_visibility(int grid[GRID_SIZE][GRID_SIZE], int hints[NUM_HINTS])
{
	int	i;
	int	j;
	int	line[GRID_SIZE];

	i = 0;
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			line[j] = grid[i][j];
			j++;
		}
		if (!check_line_visibility(line, hints[i], hints[GRID_SIZE + i]))
			return (0);
		i++;
	}
	i = 0;
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			line[j] = grid[j][i];
			j++;
		}
		if (!check_line_visibility(line, hints[2 * GRID_SIZE + i], hints[3
				* GRID_SIZE + i]))
			return (0);
		i++;
	}
	return (1);
}
/* Recursive function to solve the puzzle */
int	solve_puzzle(int grid[GRID_SIZE][GRID_SIZE], int hints[NUM_HINTS], int pos)
{
	int	row;
	int	col;
	int	number;

	if (pos == GRID_SIZE * GRID_SIZE)
	{
		return (check_visibility(grid, hints));
	}
	row = pos / GRID_SIZE;
	col = pos % GRID_SIZE;
	number = 1;
	while (number <= GRID_SIZE)
	{
		if (!is_number_in_line(grid, row, col, number))
		{
			grid[row][col] = number;
			if (solve_puzzle(grid, hints, pos + 1))
				return (1);
			grid[row][col] = 0; // Backtrack
		}
		number++;
	}
	return (0);
}
/* Read hints from command line arguments */
void	read_hints_from_args(int hints[NUM_HINTS], char *argv[])
{
	int	i;

	i = 0;
	while (i < NUM_HINTS)
	{
		hints[i] = atoi(argv[i + 1]);
		i++;
	}
}
/* Main function */
int	main(int argc, char *argv[])
{
	char	errorMsg1[] = "Error: Incorrect number of input arguments.\n";
	int		hints[NUM_HINTS];
	int		grid[GRID_SIZE][GRID_SIZE] = {0};
	char	errorMsg2[] = "Error: No solution found.\n";

	if (argc != NUM_HINTS + 1)
	{
		write(STDERR_FILENO, errorMsg1, sizeof(errorMsg1));
		return (1);
	}
	read_hints_from_args(hints, argv);
	if (solve_puzzle(grid, hints, 0))
	{
		print_grid(grid);
	}
	else
	{
		write(STDERR_FILENO, errorMsg2, sizeof(errorMsg2));
	}
	return (0);
}
