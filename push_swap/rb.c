/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:44:58 by mac               #+#    #+#             */
/*   Updated: 2022/02/11 22:46:54 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		num;
	int		index;

	num = 0;
	index = 0;
	tmp = *stack;
	*stack = tmp->next;
	num = tmp->content;
	index = tmp->index;
	tmp->next = NULL;
	tmp1 = ft_lstlast(*stack);
	ft_lstadd_back(&tmp1, ft_lstnew(num, index));
	write(1, "rb\n", 3);
}
