/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:44:26 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/12 02:18:57 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	eror(void)
{
	write(1, "error\n", 6);
	exit(0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

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
	return (nbr * sign);
}
