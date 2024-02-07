/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:35:46 by eallas            #+#    #+#             */
/*   Updated: 2024/01/27 15:48:23 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// input_validation.h
#ifndef INPUT_VALIDATION_H
# define INPUT_VALIDATION_H

// Function declarations for input validation
int	is_argument_count_valid(int argc);
int	is_input_length_valid(const char *input_string);
int	is_quotation_mark_valid(const char *input_string);
int	is_number_range_valid(const char *input_string);
int	is_input_valid(int argc, char **argv);

#endif
