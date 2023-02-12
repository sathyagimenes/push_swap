/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:57:17 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/12 14:59:35 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	index_stack(t_stack *stack);
static t_stack	ft_sortlist(t_stack *stack);
static t_stack	ft_dupstack(t_stack *stack);

void	large_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	n;
	int	size;
	index_stack(a);

	i = 0;
	size = a->size;
	while(!is_sorted(a->top))
	{
		n = 0;
		while(n++ < size)
		{
			if((*(int *)a->top->content >> i) & 1)
				ra(a);
			else
				pb(b,a);
		}
		while(b->size)
			pa(a,b);
		i++;
	}
}

static void	index_stack(t_stack *stack)
{
	t_stack	sorted;
	t_list	*node;
	t_list	*sorted_node;
	int		i;

	sorted = ft_sortlist(stack);
	node = stack->top;
	while(node)
	{
		sorted_node = sorted.top;
		i = 0;
		while(i < sorted.size)
		{
			if (*(int *)node->content == *(int *)sorted_node->content)
				*(int *)node->content = i;
			sorted_node = sorted_node->next;
			i++;
		}
		node = node->next;
	}
	ft_dellist(&sorted.top);
}

static t_stack	ft_sortlist(t_stack *stack)
{
	t_stack	sorted;
	t_stack	copy;
	int		max;
	void	*swap;

	copy = ft_dupstack(stack);
	sorted = (t_stack){NULL, 0};
	max = *(int *)get_max(copy.top);
	while (copy.top)
	{
		if (*(int *)copy.top->content == max)
		{
			swap = stack_pop(&copy);
			stack_push(&sorted, swap);
			if (copy.top)
				max = *(int *)get_max(copy.top);
		}
		else
			stack_shift_up(&copy);
	}
	return (sorted);
}

static t_stack	ft_dupstack(t_stack *stack)
{
	t_stack	copy;
	t_list	*node;
	int		i;
	int		*content;

	i = 0;
	copy = (t_stack){NULL, 0};
	while (i < stack->size)
	{
		node = ft_getnode(stack->top, i);
		content = (int *)malloc(sizeof(*content));
		if (!content)
			return (copy);
		*content = *(int *)node->content;
		stack_push(&copy, content);
		i++;
	}
	return (copy);
}
