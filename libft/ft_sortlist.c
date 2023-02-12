/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:14:13 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/11 19:59:26 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// void	ft_sortlist(t_list *list)
// {
// 	t_list	*cp_list;

// 	cp_list = ft_newnode(list->content);
// 	while(list->next)
// 	{
// 		cp_list->next = ft_newnode(list->content);
// 	}
// 	while (list->next)
// 	{
// 		if (list->content == list)
// 		{
			
// 		}
// 	}
// }

// static void	swap(t_list *a, t_list *b)
// {
// 	void	*tmp;

// 	tmp = a->content;
// 	a->content = b->content;
// 	b->content = tmp;
// }

// static int	partition(t_list *list, int start, int end)
// {
// 	int		i;
// 	t_list	*pivot;
// 	t_list	*current;
// 	int		pivot_index;

// 	i = start;
// 	pivot_index = start;//pivot idex recebe a partir de onde vamos popular a lista original (no inicio é zero, e depois aumentar conforme vamos colocando os valores minimos - de forma ordenada- na lista original)
// 	pivot = ft_getnode(list, end);//setamos o pivot para ser o node na posição end. pivot é o node que vamos pegar para comparar com o restante da lista
// 	while (i < end)
// 	{
// 		current = ft_getnode(list, i);//current pega o node da list no index i, assim, vamos pegar todos os itens da lista e comparar um a um com o pivot.
// 		if (*(int *)current->content < *(int *)pivot->content)// se o current for menor que o pivot, entro para fazer o swap
// 		{
// 			swap(current, ft_getnode(list, pivot_index));//lista recebe o current(que é um numero menor na posição do pivot_index)
// 			pivot_index++;// soma um no pivot index pq vou adicionar o proximo valor na posição de baixo
// 		}
// 		i++;
// 	}
// 	swap(ft_getnode(list, pivot_index), pivot);//depois que colocou todos os numeros menores que o pivot, coloca o pivot na lista original na posico do pivot index
// 	return (pivot_index);//retorna o index a partir de qual vai continuar a ordenar  a lista.
// }

// void	ft_sortlist(t_list *list, int start, int end)
// {
// 	int	index;

// 	if (start >= end)//o end tem que ser sempre depois do start, pq ele vai determinar o valor do pivot e o pivot é sempre um numero que ainda não foi ordenado e portanto tem que estar depois do start
// 		return ;
// 	index = partition(list, start, end);//index recebe o valor do pivot index
// 	ft_sortlist(list, start, index - 1);//vai começar do zero e o pivot vai ser a proxima posição na lista
// 	ft_sortlist(list, index + 1, end);//vai começar a partir da proxima posição na lista e o pivot vai ser o ultimo node da lista
// }

//-----------------------------------


// t_stack	ft_dupstack(t_stack *stack)
// {
// 	t_stack	copy;
// 	int i;
// 	void	*content;

// 	size = stack->size;
// 	copy = (t_stack){NULL, 0};
// 	content = stack->top->content;
// 	while (i < stack->size)
// 	{
// 		content = stack->top->next->content;
// 		stack_push(&copy, stack->top->content);
// 		// stack_shift_up(stack);
		
// 	}
// 	return (copy);
// }