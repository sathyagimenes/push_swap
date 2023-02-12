/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:13:51 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/11 21:22:16 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_dupstack(t_stack *stack);

void small_sort(t_stack *a)
{
	int max;

	max = *(int *)get_max(a->top);
	while (!is_sorted(a->top))
	{
		if (*(int *)a->top->content == max)
			ra(a);
		else if (*(int *)a->top->next->content == max)
			rra(a);
		else
			sa(a);
	}
}

void medium_sort(t_stack *a, t_stack *b)
{
	int min;

	while (!is_sorted(a->top) && a->size > 3)
	{
		min = *(int *)get_min(a->top);
		if (*(int *)a->top->content == min)
			pb(b, a);
		else if (*(int *)a->top->next->content == min)
			sa(a);
		else if (*(int *)ft_lastnode(a->top)->content == min)
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
		pa(a, b);
}

void large_sort(t_stack *a, t_stack *b)
{
	t_stack sorted;

	sorted = ft_sortlist(a);
	ft_printf("Sorted Array:\n");//depois apagar os printf
	for (int i = 0; i < sorted.size; i++)
	{
		t_list *node = ft_getnode(sorted.top, i);
		ft_printf("%d\n", *(int *)node->content);
	}
	if (a != b)
		ft_printf("sa");
	ft_dellist(&sorted.top);
}
