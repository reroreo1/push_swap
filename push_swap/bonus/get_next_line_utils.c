/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:44:41 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/09 21:55:12 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	p = (char *)malloc((i + 1) * sizeof(char));
	if (p == 0)
		return (0);
	while (str[j])
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

static void	join(char	*dest, const char	*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!p)
		return (0);
	p[0] = '\0';
	join(p, s1);
	join(p, s2);
	free((char *) s1);
	return (p);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
