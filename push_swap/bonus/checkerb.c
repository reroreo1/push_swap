/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:45:31 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/12 04:32:07 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *set1, char *set2)
{
	int			i;

	i = 0;
	while ((set1[i] || set2[i]))
	{
		if (set1[i] != set2[i])
		{
			return (set1[i] - set2[i]);
		}
		i++;
	}
	return (0);
}

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
				return (1);
			fast = fast->next;
		}
		slow = slow->next;
	}
	return (0);
}

void	execute_cmd(t_list **stacka, t_list **stackb, char *line)
{
	if (ft_strcmp("ra\n", line) == 0)
		rotatea(stacka);
	else if (ft_strcmp("rb\n", line) == 0)
		rotateb(stackb);
	else if (ft_strcmp("rrb\n", line) == 0)
		rotaterb(stackb);
	else if (ft_strcmp("rra\n", line) == 0)
		rotatera(stacka);
	else if (ft_strcmp("sb\n", line) == 0)
		swapb(*stackb);
	else if (ft_strcmp("sa\n", line) == 0)
		swapa(*stacka);
	else if (ft_strcmp("pb\n", line) == 0)
		pushb(stacka, stackb);
	else if (ft_strcmp("pa\n", line) == 0)
		pusha(stacka, stackb);
	else if (ft_strcmp("ss\n", line) == 0)
		swaps(*stacka, *stackb);
	else if (ft_strcmp("rr\n", line) == 0)
		rotater(stacka, stackb);
	else if (ft_strcmp("rrr\n", line) == 0)
		rotaterr(stacka, stackb);
	else
		eror();
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*stacka;
	t_list	*stackb;
	char	*line;

	i = 1;
	stacka = NULL;
	stackb = NULL;
	while (i < ac)
		ft_lstadd_back(&stacka, ft_lstnew(ft_atoi(av[i++]), 0));
	if (issorted(&stacka) == 1 || duplicate(&stacka))
		return (0);
	line = get_next_line(0);
	while (line)
	{	
		execute_cmd(&stacka, &stacka, line);
		free(line);
		line = get_next_line(0);
	}
	if (issorted(&stacka) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
