/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:37:18 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 02:22:22 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pushb(t_list **stacka, t_list **stackb)
{
	t_list	*tmp;
	int		tmp1;
	int		index;

	index = 0;
	if (ft_lstsize(*stacka) == 0)
		return ;
	tmp = (*stacka)->next;
	tmp1 = (*stacka)->content;
	index = (*stacka)->index;
	free(*stacka);
	*stacka = NULL;
	ft_lstadd_front(stackb, ft_lstnew(tmp1, index));
	*stacka = tmp;
}
