/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:52:09 by sde-cama          #+#    #+#             */
/*   Updated: 2023/01/29 17:29:56 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>
# include <stdlib.h>
// # include <stdio.h>
// # include <unistd.h>
// # include <stdarg.h>

// # define TRUE 1
// # define FALSE 0

// typedef int	t_bool;

typedef struct s_stack
{
	t_list	*top;
	int		size;
}	t_stack;

int		main(int argc, char **argv);
int		validate_args(int argc, char **argv);
void	stack_push(t_stack *stack, void *content);
t_bool	is_sorted(t_list *list);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	*stack_pop(t_stack *stack);
void	stack_shift_up(t_stack *stack);

#endif