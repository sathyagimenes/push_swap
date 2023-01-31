/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-cama <sde-cama@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:09:34 by sde-cama          #+#    #+#             */
/*   Updated: 2023/01/30 20:13:15 by sde-cama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_getnode(t_list *list, unsigned int n)
{
	if(!list)
		return (NULL);
	while(n--)
	{
		if (!list)
			break;
		list = list->next;
	}
	return (list);
}
