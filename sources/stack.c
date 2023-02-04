/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:34:25 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/04 09:24:43 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void stack_push(t_stack *stack, void *content)
{
	t_list *top;

	top = ft_newnode(content);
	if (stack->top)
		top->next = stack->top;
	stack->top = top;
	stack->size++;
}

void	*stack_pop(t_stack *stack)
{
	t_list	*top;
	void	*content;

	if (!stack->top)
		return (NULL);
	top = stack->top;
	content = top->content;
	stack->top = top->next;
	stack->size--;
	free(top);
	return (content);
}

void	stack_shift_up(t_stack *stack)
{
	void	*top;
	t_list	*bottom;

	top = stack_pop(stack);
	if (top)
	{
		bottom = ft_lastnode(stack->top);
		bottom->next = ft_newnode(top);
		stack->size++;
	}
}

void	stack_shift_down(t_stack *stack)
{
	t_list	*newlast;
	t_list	*bottom;

	bottom = ft_lastnode(stack->top);
	if(bottom)
	{
		bottom->next = stack->top;
		stack->top = bottom;
		if (stack->size > 1)
		{
			newlast = ft_getnode(stack->top, stack->size - 1);
			newlast->next = NULL;
		}
	}
}
