/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:13:51 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/04 09:28:32 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack *a)
{
	// int min;
	int max;

	// min = *(int *)get_min(a->top);
	max = *(int *)get_max(a->top);
	while (!is_sorted(a->top))
	{
		if(*(int *)a->top->content == max)
			ra(a);
		else if (*(int *)a->top->next->content == max)
			rra(a);
		else
			sa(a);
		// else if(*(int *)a->top->content != min && *(int *)a->top->content != max && *(int *)a->top->next->content == min)
		// 	sa(a);
		// else
		// 	rra(a);
	}
	
}
