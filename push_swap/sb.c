/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:44:19 by mac               #+#    #+#             */
/*   Updated: 2022/02/11 22:52:46 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list *stack)
{
	int	tmp;
	int	tmp1;

	if (ft_lstsize(stack) > 1)
	{		
		tmp = stack->content;
		stack->content = stack->next->content;
		stack->next->content = tmp;
		tmp1 = stack->index;
		stack->index = stack->next->index;
		stack->next->index = tmp1;
	}
	write(1, "sb\n", 3);
}
