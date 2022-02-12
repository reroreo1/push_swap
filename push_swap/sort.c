/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:46:04 by mac               #+#    #+#             */
/*   Updated: 2022/02/11 22:56:55 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stacka, t_list **stackb, int ac)
{
	int	i;
	int	j;
	int	max_num;
	int	max_bits;

	i = -1;
	j = 0;
	max_num = ac;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (++i < max_bits)
	{
		j = 0;
		while (++j <= ac)
		{
			if ((((*stacka)->index >> i) & 1) == 1)
				ra(stacka);
			else
				pb(stacka, stackb);
		}
		while (ft_lstsize(*stackb) != 0)
			pa(stacka, stackb);
	}
}
