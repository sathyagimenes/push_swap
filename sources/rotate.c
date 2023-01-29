/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:54:16 by sde-cama          #+#    #+#             */
/*   Updated: 2023/01/29 17:21:11 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	if(a->size > 1)
	{
		ft_putendl_fd("ra", 1);
		stack_shift_up(a);
	}
}

void	rb(t_stack *b)
{
	if(b->size > 1)
	{
		ft_putendl_fd("rb", 1);
		stack_shift_up(b);
	}
}

void	rr(t_stack *a, t_stack *b)
{
	if(a->size > 1 && b->size > 1)
	{
		ft_putendl_fd("rr", 1);
		stack_shift_up(a);
		stack_shift_up(b);
	}
}
