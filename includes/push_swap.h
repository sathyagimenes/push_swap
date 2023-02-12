/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:52:09 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/12 15:11:38 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>
# include <stdlib.h>

typedef struct s_stack
{
	t_list	*top;
	int		size;
}	t_stack;

int		main(int argc, char **argv);
int		validate_args(int argc, char **argv);
t_bool	is_sorted(t_list *list);
void	*get_min(t_list *list);
void	*get_max(t_list *list);
void	stack_push(t_stack *stack, void *content);
void	*stack_pop(t_stack *stack);
void	stack_shift_up(t_stack *stack);
void	stack_shift_down(t_stack *stack);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *b, t_stack *a);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	small_sort(t_stack *a);
void	medium_sort(t_stack *a, t_stack *b);
void	large_sort(t_stack *a, t_stack *b);

#endif