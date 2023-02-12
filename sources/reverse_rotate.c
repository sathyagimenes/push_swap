/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:06:58 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/12 19:54:18 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	if (a->size > 1)
	{
		ft_putendl_fd("rra", 1);
		stack_shift_down(a);
	}
}

void	rrb(t_stack *b)
{
	if (b->size > 1)
	{
		ft_putendl_fd("rrb", 1);
		stack_shift_down(b);
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	if (a->size > 1 && b->size > 1)
	{
		ft_putendl_fd("rrr", 1);
		stack_shift_down(a);
		stack_shift_down(b);
	}
}
