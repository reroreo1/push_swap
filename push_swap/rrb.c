/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:45:52 by mac               #+#    #+#             */
/*   Updated: 2022/02/15 13:26:16 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		num;
	int		index;
	int		size;

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
	write(1, "rrb\n", 4);
}
