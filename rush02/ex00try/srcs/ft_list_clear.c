/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchich <mdchich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:34:40 by mdchich           #+#    #+#             */
/*   Updated: 2024/02/04 17:39:09 by mdchich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

void	ft_list_clear(t_dict **begin_with)
{
	t_dict	*ptr;
	t_dict	*liste;

	liste = *begin_with;
	if (liste)
		while (liste)
		{
			ptr = liste->next;
			free(liste->literal);
			free(liste);
			liste = ptr;
		}
}
