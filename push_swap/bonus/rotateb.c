/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:44:58 by mac               #+#    #+#             */
/*   Updated: 2022/02/18 06:57:48 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotateb(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		num;
	int		index;

	if (!(*stack))
		return ;
	num = 0;
	index = 0;
	tmp = *stack;
	*stack = tmp->next;
	num = tmp->content;
	index = tmp->index;
	tmp->next = NULL;
	tmp1 = ft_lstlast(*stack);
	ft_lstadd_back(&tmp1, ft_lstnew(num, index));
}
