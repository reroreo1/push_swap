/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:57:27 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/11 22:59:19 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort4(t_list **stacka, t_list **stackb)
{
	while ((*stacka)->index != 0)
		ra(stacka);
	pb(stacka, stackb);
	sort3(stacka);
	pa(stacka, stackb);
}
