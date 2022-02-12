/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotatera.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:22:14 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 04:36:39 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotatera(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		num;
	int		index;
	int		size;

	num = 0;
	index = 0;
	size = ft_lstsize(*stack);
	tmp = *stack;
	tmp1 = ft_lstlast(*stack);
	num = tmp1->content;
	index = tmp1->index;
	while (size - 2)
	{
		tmp = tmp->next;
		size--;
	}
	ft_lstadd_front(stack, ft_lstnew(num, index));
	tmp->next = NULL;
	free(tmp1);
}
