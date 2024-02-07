/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:40:23 by klamprak          #+#    #+#             */
/*   Updated: 2024/02/05 11:22:46 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	op_plus(int a, int b)
{
	ft_putnbr(a + b);
}

void	op_minus(int a, int b)
{
	ft_putnbr(a - b);
}

void	op_mult(int a, int b)
{
	ft_putnbr(a * b);
}

void	op_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	ft_putnbr(a / b);
}

void	op_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	ft_putnbr(a % b);
}
