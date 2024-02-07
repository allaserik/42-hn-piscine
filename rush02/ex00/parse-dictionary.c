/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse-dictionary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eallas <eallas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:09:33 by eallas            #+#    #+#             */
/*   Updated: 2024/02/03 16:47:51 by eallas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse-dictionary.h"
#define BUFFER_SIZE 32

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f'
		|| c == '\v');
}

static char	*trim_whitespace(char *str)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (is_whitespace(str[start]))
		start++;
	end = ft_strlen(str);
	while (end > start && is_whitespace(str[end - 1]))
		end--;
	return (str + start);
}

int	get_next_line(int fd, char **line)
{
	static char	buffer[BUFFER_SIZE + 1];
	int			bytes_read;
	int			i;

	*line = NULL;
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		i = 0;
		while (buffer[i] != '\0')
		{
			if (buffer[i] == '\n')
			{
				buffer[i] = '\0';
				*line = malloc(i + 1);
				if (!*line)
					return (-1);
				*line = strcpy(*line, buffer);
				return (1);
			}
			i++;
		}
	}
	if (bytes_read == 0)
		return (0);
	return (-1);
}

static t_entry	parse_entry(char *line)
{
	t_entry	entry;
	char	*colon;

	// Find the colon separating the number and value
	colon = line;
	while (*colon && *colon != ':')
		colon++;
	// Extract number and value
	entry.number = atoi(trim_whitespace(line));
	entry.value = strdup(trim_whitespace(colon + 1));
	return (entry);
}

t_entry	*parse_dictionary(const char *path)
{
	int		fd;
	char	*line;
	t_entry	*dictionary;
	int		i;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		return (NULL);
	}
	dictionary = malloc(sizeof(t_entry) * 100); // Adjust the size accordingly
	i = 0;
	while (get_next_line(fd, &line) > 0)
	{
		dictionary[i++] = parse_entry(line);
		free(line);
	}
	dictionary[i] = (t_entry){0, NULL}; // Mark the end of the dictionary
	close(fd);
	return (dictionary);
}

void	free_dictionary(t_entry *dictionary)
{
	int	i;

	i = 0;
	while (dictionary[i].value)
	{
		free(dictionary[i].value);
		i++;
	}
	free(dictionary);
}
