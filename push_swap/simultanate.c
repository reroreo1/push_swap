/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simultanate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:50:17 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 00:42:49 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list *stacka, t_list *stackb)
{
	sa(stacka);
	sb(stackb);
}

void	rr(t_list **stacka, t_list **stackb)
{
	ra(stacka);
	rb(stackb);
}

void	rrr(t_list **stacka, t_list **stackb)
{
	rra(stacka);
	rrb(stackb);
}
