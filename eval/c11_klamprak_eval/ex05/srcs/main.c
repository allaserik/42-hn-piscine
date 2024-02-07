/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:25:14 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 11:44:40 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	op_list[6];
	void	(*(fun_list[6]))(int, int);
	int		i;

	if (argc != 4)
		return (0);
	if (!is_operator(argv[2]))
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	init_func_list(fun_list, op_list);
	i = is_included(op_list, argv[2]);
	(*(fun_list[i]))(a, b);
}

int	is_included(char op_list[6], char *op)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (op_list[i] == op[0])
			return (i);
		i++;
	}
	return (-1);
}

void	init_func_list(void (*(fun_list[6]))(int, int), char op_list[6])
{
	fun_list[0] = op_plus;
	fun_list[1] = op_minus;
	fun_list[2] = op_mult;
	fun_list[3] = op_div;
	fun_list[4] = op_mod;
	fun_list[5] = NULL;
	op_list[0] = '+';
	op_list[1] = '-';
	op_list[2] = '*';
	op_list[3] = '/';
	op_list[4] = '%';
}

int	is_operator(char *str)
{
	int	is_o;

	is_o = (str[0] == '+') || (str[0] == '-') || (str[0] == '*');
	is_o = is_o || (str[0] == '/') || (str[0] == '%');
	is_o = is_o && (str[1] == '\0');
	if (!is_o)
		ft_putstr("0");
	return (is_o);
}
