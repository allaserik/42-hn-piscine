/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:54:18 by eallas            #+#    #+#             */
/*   Updated: 2024/01/25 14:50:42 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	int tab2[size]; // variable length array forbidden
	i = 0;
	while (i < size)
	{
		tab2[i] = *(tab + (size - 1 - i));
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab2[i];
		i++;
	}
}
