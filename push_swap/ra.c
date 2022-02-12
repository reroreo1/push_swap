/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:26:42 by mac               #+#    #+#             */
/*   Updated: 2022/02/11 22:46:00 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		num;
	int		index;

	index = 0;
	num = 0;
	tmp = *stack;
	*stack = tmp->next;
	num = tmp->content;
	index = tmp->index;
	tmp->next = NULL;
	free(tmp);
	tmp1 = ft_lstlast(*stack);
	ft_lstadd_back(&tmp1, ft_lstnew(num, index));
	write(1, "ra\n", 3);
}
