/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:19:44 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/12 19:55:55 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	void	*first;
	void	*second;

	if (a->size > 1)
	{
		ft_putendl_fd("sa", 1);
		first = stack_pop(a);
		second = stack_pop(a);
		stack_push(a, first);
		stack_push(a, second);
	}
}

void	sb(t_stack *b)
{
	void	*first;
	void	*second;

	if (b->size > 1)
	{
		ft_putendl_fd("sb", 1);
		first = stack_pop(b);
		second = stack_pop(b);
		stack_push(b, first);
		stack_push(b, second);
	}
}
