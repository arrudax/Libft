/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:10:04 by maanton2          #+#    #+#             */
/*   Updated: 2024/11/09 01:31:24 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

static char	*ft_static_update_buffer(char **buffer)
{
	int		i;
	char	*temp_b;
	char	*p_line;

	i = 0;
	while ((*buffer)[i] != '\0' && (*buffer)[i] != '\n')
		i++;
	p_line = (char *)malloc((i + 2) * sizeof(char));
	if (!p_line)
		return (NULL);
	ft_memcpy(p_line, *buffer, i);
	if (!p_line)
	{
		free(p_line);
		return (NULL);
	}
	temp_b = *buffer;
	if ((*buffer)[i] == '\n')
		p_line[i++] = '\n';
	p_line[i] = '\0';
	*buffer = ft_strdup(*buffer + i);
	free(temp_b);
	if (!(*buffer))
		return (NULL);
	return (p_line);
}

static char	*ft_read_file(char **buffer, int *bytes, int fd)
{
	char	*temp;
	char	*p_buffer;

	p_buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!p_buffer)
		return (NULL);
	while (1)
	{
		(*bytes) = read(fd, p_buffer, BUFFER_SIZE);
		if (*bytes <= 0)
			break ;
		p_buffer[*bytes] = '\0';
		temp = *buffer;
		*buffer = ft_strjoin(*buffer, p_buffer);
		free(temp);
		if (!*buffer)
			return (NULL);
		if (ft_strchr(*buffer, '\n'))
			break ;
	}
	free(p_buffer);
	return (*buffer);
}

char	*get_next_line(int fd)
{
	int			bytes;
	char		*line;
	static char	*buffer[FD_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes = 1;
	buffer[fd] = ft_read_file(&buffer[fd], &bytes, fd);
	if (!buffer[fd] || *buffer[fd] == '\0' || bytes == -1)
	{
		free(buffer[fd]);
		buffer[fd] = NULL;
		return (NULL);
	}
	line = ft_static_update_buffer(&buffer[fd]);
	if (!line)
	{
		free(buffer[fd]);
		buffer[fd] = NULL;
	}
	return (line);
}
