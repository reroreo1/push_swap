/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:44:26 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/18 07:04:33 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	eror(void)
{
	write(1, "error\n", 6);
	exit(0);
}

long	ft_atoi(const char *str)
{
	int		i;
	long	nbr;
	long	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (str[0] == '-' && str[1] == '\0')
		eror();
	if (str[i] == '-')
	{
			sign = (-1);
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		eror();
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9') && str[i])
		eror();
	return (nbr * sign);
}

void	parcing(t_list **stacka, int ac, char **av)
{
	int		i;
	long	nb;

	i = 1;
	while (i < ac)
	{
		nb = ft_atoi(av[i++]);
		if (!(nb <= 2147483647 && nb >= -2147483648))
			eror();
		ft_lstadd_back(stacka, ft_lstnew(nb, 0));
	}
}
