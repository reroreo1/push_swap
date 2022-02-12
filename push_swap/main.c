/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 23:00:59 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/12 21:46:28 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	randomsort(t_list **stacka, t_list **stackb, int ac, int *arr)
{
	smallsort(stacka, stackb, ac, arr);
	verybigsort(stacka, stackb, ac, arr);
}

void	smallsort(t_list **stacka, t_list **stackb, int ac, int *arr)
{
	if (ac == 3)
		sort3(stacka);
	else if (ac == 4)
	{
		arr = (int *)malloc(4 * ac);
		lltoarr(stacka, arr, ac);
		sortarr(&arr, ac);
		indexing(stacka, arr, ac);
		free(arr);
		sort4(stacka, stackb);
	}
	else if (ac == 5)
	{
		arr = (int *)malloc(4 * ac);
		lltoarr(stacka, arr, ac);
		sortarr(&arr, ac);
		indexing(stacka, arr, ac);
		free(arr);
		sort5(stacka, stackb);
	}
}

void	verybigsort(t_list **stacka, t_list **stackb, int ac, int *arr)
{
	if (ac > 5)
	{
		arr = (int *)malloc(4 * ac);
		lltoarr(stacka, arr, ac);
		sortarr(&arr, ac);
		indexing(stacka, arr, ac);
		free(arr);
		sort(stacka, stackb, ac);
	}
}

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;
	int		i;
	int		*arr;
	long	nb;

	i = 1;
	nb = 0;
	arr = NULL;
	stacka = NULL;
	stackb = NULL;
	if (ac <= 2)
		return (0);
	while (i < ac)
	{
		nb = ft_atoi(av[i++]);
		if (!(nb <= 2147483647 && nb >= -2147483648))
			eror();
		ft_lstadd_back(&stacka, ft_lstnew(nb, 0));
	}
	if (issorted(&stacka) == 1 || duplicate(&stacka))
		return (0);
	randomsort(&stacka, &stackb, ac - 1, arr);
}
