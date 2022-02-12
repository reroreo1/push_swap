/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simultanate1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:50:17 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 04:38:36 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swaps(t_list *stacka, t_list *stackb)
{
	swapa(stacka);
	swapb(stackb);
}

void	rotater(t_list **stacka, t_list **stackb)
{
	rotatea(stacka);
	rotateb(stackb);
}

void	rotaterr(t_list **stacka, t_list **stackb)
{
	rotatera(stacka);
	rotaterb(stackb);
}
