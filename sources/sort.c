/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:13:51 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/04 15:24:04 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack *a)
{
	int max;

	max = *(int *)get_max(a->top);
	while (!is_sorted(a->top))
	{
		if(*(int *)a->top->content == max)
			ra(a);
		else if (*(int *)a->top->next->content == max)
			rra(a);
		else
			sa(a);
	}
	
}

void	medium_sort(t_stack *a, t_stack *b)
{
	int min;

	while (!is_sorted(a->top) && a->size > 3)
	{
		min = *(int *)get_min(a->top);
		if(*(int *)a->top->content == min)
			pb(b, a);
		else if(*(int *)a->top->next->content == min)
			sa(a);
		else if(*(int *)ft_lastnode(a->top)->content == min)
			rra(a);
		else
		{
			ra(a);
			ra(a);
		}
	}
	if (!is_sorted(a->top))
		small_sort(a);
	while (b->size)
	{
		pa(a, b);
	}
}
