/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:56:59 by mac               #+#    #+#             */
/*   Updated: 2022/02/15 10:18:34 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H

# define PUSH_SWAP_BONUS_H
# define BUFFER_SIZE  3

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

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
void	swapa(t_list *stack);
void	pusha(t_list **stacka, t_list **stackb);
void	rotatea(t_list **stack);
void	rotatera(t_list **stack);
void	swapb(t_list *stack);
void	pushb(t_list **stacka, t_list **stackb);
void	rotateb(t_list **stack);
void	rotaterb(t_list **stack);
void	swaps(t_list *stacka, t_list *stackb);
void	rotater(t_list **stacka, t_list **stackb);
void	rotaterr(t_list **stacka, t_list **stackb);
int		issorted(t_list **stack);
int		duplicate(t_list **stack);
void	indexing(t_list **stack, int *arr, int ac);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char	*get_line(char **s, char *temp, char *line);
int		ft_strcmp(char *set1, char *set2);
void	eror(void);
void	parcing(t_list **stacka, int ac, char **av);

#endif