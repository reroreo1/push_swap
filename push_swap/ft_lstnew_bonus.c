/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:21:48 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/11 22:33:12 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content, int index)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->content = content;
	new->index = index;
	new->next = NULL;
	return (new);
}
