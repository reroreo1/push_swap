/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:56:59 by mac               #+#    #+#             */
/*   Updated: 2022/02/12 21:14:58 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content, int index);
void	ft_lstadd_front(t_list	**lst, t_list *first);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
long	ft_atoi(const char *str);
void	sa(t_list *stack);
void	pa(t_list **stacka, t_list **stackb);
void	ra(t_list **stack);
void	rra(t_list **stack);
void	sb(t_list *stack);
void	pb(t_list **stacka, t_list **stackb);
void	rb(t_list **stack);
void	rrb(t_list **stack);
void	ss(t_list *stacka, t_list *stackb);
void	rr(t_list **stacka, t_list **stackb);
void	rrr(t_list **stacka, t_list **stackb);
void	sort3(t_list **stacka);
void	sort5(t_list **stacka, t_list **stackb);
void	sort(t_list **stacka, t_list **stackb, int ac);
void	lltoarr(t_list **stack, int *arr, int ac);
void	sortarr(int **arrr, int len);
int		issorted(t_list **stack);
int		duplicate(t_list **stack);
void	indexing(t_list **stack, int *arr, int ac);
void	sort4(t_list **stacka, t_list **stackb);
void	eror(void);
void	verybigsort(t_list **stacka, t_list **stackb, int ac, int *arr);
void	smallsort(t_list **stacka, t_list **stackb, int ac, int *arr);
void	randomsort(t_list **stacka, t_list **stackb, int ac, int *arr);

#endif