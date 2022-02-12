/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:01:50 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 21:42:13 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing(t_list **stack, int *arr, int ac)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		i = 0;
		while (i < ac)
		{
			if (tmp->content == arr[i])
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}
}
