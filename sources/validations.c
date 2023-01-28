/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:14:17 by sde-cama          #+#    #+#             */
/*   Updated: 2023/01/28 14:53:50 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_int(char **argv);
static int between_min_max(char **argv, int argc);
static int not_twice(char **argv, int argc);

int validate_args(int argc, char **argv)
{
	if (!is_int(argv))
		return (0);
	if (!between_min_max(argv, argc))
		return (0);
	if (argc > 2)
		if (!not_twice(argv, argc))
			return (0);
	return (1);
}

static int is_int(char **argv)
{
	size_t i;
	size_t j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int between_min_max(char **argv, int argc)
{
	long int x;
	int i;

	i = 0;
	while (++i < argc)
	{
		// x = ft_strlen(argv[i]);
		// if (x > 11)
		// 	return (0);
		// if (x == 11)
		// 	if (argv[i][0] != '-' || argv[i][1] > '2' || argv[i][2] > '1')
		// 		return (0);
		// if (x == 10)
		// 	if (argv[i][0] > '2' || argv[i][1] > '1')
		// 		return (0);
		x = ft_atol(argv[i]);
		if (x > 2147483647 || x < -2147483648)
			return (0);
	}
	return (1);
}

static int not_twice(char **argv, int argc)
{
	int i;
	int j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
