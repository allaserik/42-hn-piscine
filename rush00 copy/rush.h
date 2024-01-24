/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilin <dilin@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:36:41 by dilin             #+#    #+#             */
/*   Updated: 2024/01/20 13:47:17 by dilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_print_rectangle(int x, int y, int cursor_x, int cursor_y);
void	ft_check_location(int cursor_x, int cursor_y, int x, int y);
void	ft_check_corner_or_side(int cursor_x, int cursor_y, int x, int y);
void	ft_check_vertical_or_middle(int cursor_x, int cursor_y, int x, int y);
