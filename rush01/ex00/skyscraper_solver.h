/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_solver.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:36:53 by eallas            #+#    #+#             */
/*   Updated: 2024/01/27 18:23:27 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_SOLVER_H
# define SKYSCRAPER_SOLVER_H
# include "custom_write_functions.h"
# include "display_output.h"
# include "input_validation.h"
# include <unistd.h>

// Function prototypes for the Skyscraper solver algorithm
// Add your function prototypes here
int	solve_skyscraper_puzzle(int **board, const char *input_string);

#endif
