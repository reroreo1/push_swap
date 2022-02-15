/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:44:26 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/15 13:34:55 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	eror(void)
{
	write(1, "error\n", 6);
	exit(0);
}

int	ft_isdigit(char *c)
{
	int	i;

	i = 0;
	while(c[i++])
	{
		if (!(c[i] >= 48 && c[i] <= 57))
			return (0);
	}
	return (1);
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
	return (nbr * sign);
}
