/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flfische <flfische@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:03:18 by flfische          #+#    #+#             */
/*   Updated: 2024/01/25 16:23:24 by flfische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_putargs(int argc, char **argv);
void	swap(char **a, char **b);

int	main(int argc, char **argv)
{
	int	has_changed;
	int	i;
	int	comp;

	has_changed = 1;
	if (argc == 1)
		return (0);
	while (has_changed)
	{
		has_changed = 0;
		i = 1;
		while (i < argc - 1)
		{
			comp = ft_strcmp(argv[i], argv[i + 1]);
			if (comp > 0)
			{
				swap(&argv[i], &argv[i + 1]);
				has_changed = 1;
			}
			i++;
		}
	}
	ft_putargs(argc, argv);
	return (0);
}

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putargs(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
