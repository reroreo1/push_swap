/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LLtoArr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:24:01 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 21:42:40 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lltoarr(t_list **stack, int *arr, int ac)
{
	int		i;
	t_list	*tmp;

	tmp = *stack;
	i = 0;
	while (i < ac)
	{
		arr[i++] = tmp->content;
		tmp = tmp->next;
	}
}

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sortarr(int **arrr, int len)
{
	int	*arr;
	int	i;
	int	j;
	int	min_ind;

	i = 0;
	j = 0;
	arr = *arrr;
	while (i < len)
	{
		min_ind = i;
		j = i + 1;
		while (j < len)
		{
			if (arr[j] < arr[min_ind])
				min_ind = j;
			j++;
		}
		swap(&arr[min_ind], &arr[i]);
		i++;
	}
}
