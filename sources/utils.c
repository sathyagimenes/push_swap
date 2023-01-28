/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:13:43 by sde-cama          #+#    #+#             */
/*   Updated: 2023/01/28 17:14:05 by sde-cama         ###   ########.fr       */
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
