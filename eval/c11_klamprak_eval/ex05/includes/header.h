/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:44:22 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 11:44:28 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
// Declarations of main.c
int		is_operator(char *str);
int		is_included(char op_list[6], char *op);
void	init_func_list(void (*(fun_list[6]))(int, int), char op_list[6]);
// Declarations of ft_atoi.c
int		get_int(char *str, int i, int sign);
int		ft_atoi(char *str);
// Declarations of ft_ops.c
void	op_plus(int a, int b);
void	op_minus(int a, int b);
void	op_mult(int a, int b);
void	op_div(int a, int b);
void	op_mod(int a, int b);
// Declarations of ft_putnbr.c
void	ft_putstr(char *str);
int		count_digits(int nb);
int		find_div(int number_of_digits);
void	print_positive(int nb);
void	ft_putnbr(int nb);
#endif