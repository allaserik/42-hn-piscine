/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:23:35 by eallas            #+#    #+#             */
/*   Updated: 2024/02/03 15:49:35 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATE_H
# define VALIDATE_H

# include <unistd.h>

int	ft_string_is_number(char *str);
int	ft_char_is_number(char c);
int	ft_string_is_negative_number(char *str);
int	ft_validate_number(char *str);

#endif
