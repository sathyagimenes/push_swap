/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:12:18 by sde-cama          #+#    #+#             */
/*   Updated: 2023/01/30 21:18:23 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	void	*top;

	if(a->size > 1)
	{
		ft_putendl_fd("pa", 1);
		top = stack_pop(a);
		stack_push(b, top);
	}
}

void	pb(t_stack *b, t_stack *a)
{
	void	*top;

	if(b->size > 1)
	{
		ft_putendl_fd("pb", 1);
		top = stack_pop(b);
		stack_push(a, top);
	}
}
