/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:24:19 by mac               #+#    #+#             */
/*   Updated: 2022/02/11 23:15:14 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list **stacka)
{
	int	first;
	int	second;
	int	third;

	first = (*stacka)->content;
	second = ((*stacka)->next)->content;
	third = ((*stacka)->next->next)->content;
	if (second < first && second < third && first < third)
		sa(*stacka);
	if (second < first && second > third && first > third)
	{
		sa(*stacka);
		rra(stacka);
	}
	if (second < first && second < third && first > third)
		ra(stacka);
	if (second > first && second > third && first < third)
	{
		sa(*stacka);
		ra(stacka);
	}
	if (second > first && second > third && first > third)
		rra(stacka);
}
