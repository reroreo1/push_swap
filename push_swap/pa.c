/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:37:18 by mac               #+#    #+#             */
/*   Updated: 2022/02/11 22:41:40 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stacka, t_list **stackb)
{
	t_list	*tmp;
	int		tmp1;
	int		index;

	index = 0;
	if (ft_lstsize(*stackb) == 0)
		return ;
	tmp = (*stackb)->next;
	tmp1 = (*stackb)->content;
	index = (*stackb)->index;
	free(*stackb);
	*stackb = NULL;
	ft_lstadd_front(stacka, ft_lstnew(tmp1, index));
	*stackb = tmp;
	write(1, "pa\n", 3);
}
