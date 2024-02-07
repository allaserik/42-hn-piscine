/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchich <mdchich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:35:41 by mdchich           #+#    #+#             */
/*   Updated: 2024/02/04 16:35:44 by mdchich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_list_swap(t_dict *liste)
{
	int		nb;
	int		suf;
	char	*literal;

	nb = liste->nb;
	suf = liste->suf;
	literal = liste->literal;
	liste->nb = liste->next->nb;
	liste->suf = liste->next->suf;
	liste->literal = liste->next->literal;
	liste->next->nb = nb;
	liste->next->suf = suf;
	liste->next->literal = literal;
}

void	ft_list_sort(t_dict **begin_list)
{
	t_dict	*a;
	t_dict	*b;

	a = *begin_list;
	while (a != NULL)
	{
		b = *begin_list;
		while (b->next != NULL)
		{
			if (b->nb < b->next->nb)
				ft_list_swap(b);
			b = b->next;
		}
		a = a->next;
	}
}
