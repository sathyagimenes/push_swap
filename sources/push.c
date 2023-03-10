/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:12:18 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/12 19:54:01 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	void	*top;

	if (b->size > 0)
	{
		ft_putendl_fd("pa", 1);
		top = stack_pop(b);
		stack_push(a, top);
	}
}

void	pb(t_stack *b, t_stack *a)
{
	void	*top;

	if (a->size > 0)
	{
		ft_putendl_fd("pb", 1);
		top = stack_pop(a);
		stack_push(b, top);
	}
}
