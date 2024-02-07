/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchich <mdchich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:34:59 by mdchich           #+#    #+#             */
/*   Updated: 2024/02/04 17:39:36 by mdchich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_list_push_front(t_dict **liste, int n, int suf, char *lit)
{
	t_dict	*push;

	if (liste)
	{
		push = ft_create_elem(n, suf, lit);
		if (push == NULL)
			return (0);
		push->next = *liste;
		*liste = push;
	}
	else
	{
		if ((*liste = ft_create_elem(n, suf, lit)) == NULL)
			return (0);
	}
	return (1);
}
