/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse-dictionary.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:08:40 by eallas            #+#    #+#             */
/*   Updated: 2024/02/03 16:49:18 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PARSE_DICTIONARY_H
# define PARSE_DICTIONARY_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

typedef struct	s_entry
{
	int			number;
	char		*value;
}				t_entry;

void	free_dictionary(t_entry *dictionary);
t_entry	*parse_dictionary(const char *path);
static size_t	ft_strlen(const char *str);
static int	is_whitespace(char c);
static char	*trim_whitespace(char *str);
int	get_next_line(int fd, char **line);



#endif
