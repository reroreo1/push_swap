/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:44:19 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 04:38:59 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swapa(t_list *stack)
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
}
