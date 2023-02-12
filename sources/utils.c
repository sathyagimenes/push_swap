/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:13:43 by sde-cama          #+#    #+#             */
/*   Updated: 2023/02/12 13:14:54 by sde-cama         ###   ########.fr       */
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
