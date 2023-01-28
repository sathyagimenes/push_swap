/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:05:12 by sde-cama          #+#    #+#             */
/*   Updated: 2023/01/28 17:13:00 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	create_stack(int argc, char **argv, t_stack *stack);

int main(int argc, char **argv)
{
	t_stack	a;
	// t_stack	b;

	if (argc == 1)
		exit(1);
	if (!validate_args(argc, argv))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	a = (t_stack){NULL, 0};
	// b = (t_stack){NULL, 0};
	create_stack(argc, argv, &a);
	if (!is_sorted(a.head))
	{
		ft_printf("sa\n");
	}
	return (0);
}

static int	create_stack(int argc, char **argv, t_stack *stack)
{
	long temp;
	int *content;

	while (argc)
	{
		temp = ft_atol(argv[argc-- - 1]);
		content = malloc(sizeof(*content));
		if (!content)
			return (1);
		*content = (int)temp;
		stack_push(stack, content);
	}
	return (0);
}