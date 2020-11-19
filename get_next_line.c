/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:00:36 by rmanfred          #+#    #+#             */
/*   Updated: 2020/06/25 12:47:25 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free(char **str)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
	}
}

char	*to_join(int bytes_to_read, char *buf, char *to_save)
{
	char		*temp;

	buf[bytes_to_read] = '\0';
	temp = to_save;
	to_save = ft_strjoin(to_save, buf);
	free(temp);
	return (to_save);
}

int		get_result(char **line, char **to_save)
{
	char		*find_n;
	char		*temp;

	find_n = ft_strchr(*to_save, '\n');
	*find_n = '\0';
	if (!(*line = ft_strdup(*to_save)))
	{
		ft_free(to_save);
		return (-1);
	}
	find_n++;
	temp = *to_save;
	if (!(*to_save = ft_strdup(find_n)))
	{
		free(temp);
		return (-1);
	}
	free(temp);
	return (1);
}

int		check_result(int bytes_to_read, char **line, char **to_save)
{
	if (bytes_to_read < 0)
	{
		ft_free(to_save);
		return (-1);
	}
	if (bytes_to_read == 0)
	{
		if (!(*line = ft_strdup(*to_save)))
		{
			ft_free(to_save);
			return (-1);
		}
		ft_free(to_save);
		return (0);
	}
	else
		return (get_result(line, to_save));
}

int		get_next_line(int fd, char **line)
{
	static char	*to_save;
	char		*buf;
	int			bytes_to_read;

	if ((fd < 0) || !line || (BUFFER_SIZE < 1))
		return (-1);
	if (!to_save && !(to_save = ft_strdup("")))
		return (-1);
	if (!(buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
	{
		ft_free(&to_save);
		return (-1);
	}
	bytes_to_read = 1;
	while ((!(ft_strchr(to_save, '\n')))
		&& ((bytes_to_read = read(fd, buf, BUFFER_SIZE)) > 0))
		if (!(to_save = to_join(bytes_to_read, buf, to_save)))
		{
			free(buf);
			return (-1);
		}
	free(buf);
	return (check_result(bytes_to_read, line, &to_save));
}
