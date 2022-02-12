/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rezzahra <rezzahra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 04:19:37 by rezzahra          #+#    #+#             */
/*   Updated: 2022/02/12 04:19:56 by rezzahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static char	*allocate(char const *s, size_t len)
{
	char	*p;

	if (ft_strlen(s) < len)
		p = (char *)malloc(ft_strlen(s) * sizeof(char));
	else
		p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = -1;
	j = -1;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[++i])
	{
		if (i == start)
		{
			p = allocate(s, len);
			if (!p)
				return (NULL);
			while (++j < len && s[i + j])
				p[j] = s[i + j];
			p[j] = '\0';
			return (p);
		}
	}
	return (0);
}

char	*get_line(char **s, char *temp, char *line)
{
	int	size;

	size = ft_strchr(*s, '\n') - *s + 1;
	line = ft_substr(*s, 0, size);
	temp = *s;
	*s = ft_substr(*s, size, ft_strlen(*s) - size);
	free(temp);
	return (line);
}

static char	*lastline(char **s)
{
	char	*temp2;

	if (*s && **s != '\0')
	{
		temp2 = *s;
		*s = NULL;
		return (temp2);
	}
	else
	{
		free(*s);
		*s = NULL;
		return (NULL);
	}
}

char	*get_next_line(int fd)
{
	static char	*s;
	char		buffer[BUFFER_SIZE + 1];
	int			ret;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (s == NULL)
		s = ft_strdup("");
	while ((ft_strchr(s, '\n')) == NULL)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret < 0)
		{
			free(s);
			s = NULL;
			return (NULL);
		}
		if (ret == 0)
			break ;
		buffer[ret] = 0;
		s = ft_strjoin(s, buffer);
	}
	if ((ft_strchr(s, '\n')) == NULL)
		return (lastline(&s));
	return (get_line(&s, NULL, NULL));
}
