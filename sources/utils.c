/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:13:43 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/11 21:20:39 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_sorted(t_list *list)
{
	if (!list)
		return (FALSE);
	while (list->next)
	{
		if (*(int *)list->content > *(int *)list->next->content)
			return (FALSE);
		list = list->next;
	}
	return (TRUE);
}

void	*get_min(t_list *list)
{
	void	*min;

	if(!list)
		return (NULL);
	min = list->content;
	while(list)
	{
		if(*(int *)list->content < *(int *)min)
			min = list->content;
		list = list->next;
	}
	return (min);
}

void	*get_max(t_list *list)
{
	void	*max;

	if(!list)
		return (NULL);
	max = list->content;
	while(list)
	{
		if(*(int *)list->content > *(int *)max)
			max = list->content;
		list = list->next;
	}
	return (max);
}


t_stack	ft_dupstack(t_stack *stack)
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

t_stack	ft_sortlist(t_stack *stack)
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
