/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:31:33 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 00:43:06 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5(t_list **stacka, t_list **stackb)
{
	while ((*stacka)->index != 0)
		ra(stacka);
	pb(stacka, stackb);
	while ((*stacka)->index != 4)
		ra(stacka);
	pb(stacka, stackb);
	sort3(stacka);
	pa(stacka, stackb);
	ra(stacka);
	pa(stacka, stackb);
}
