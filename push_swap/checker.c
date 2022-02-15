/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:43:53 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/15 08:43:05 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	issorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	if (tmp == NULL)
		return (1);
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	duplicate(t_list **stack)
{
	t_list	*slow;
	t_list	*fast;

	slow = *stack;
	while (slow)
	{
		fast = slow->next;
		while (fast)
		{
			if (slow->content == fast->content)
			{
				write(1, "error\n", 6);
				return (1);
			}
			fast = fast->next;
		}
		slow = slow->next;
	}
	return (0);
}

void	sort2(t_list **stacka)
{
	if ((*stacka)->content > (*stacka)->next->content)
		sa(*stacka);
}
