/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:26:16 by maanton2          #+#    #+#             */
/*   Updated: 2024/11/08 00:06:03 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char		*p_d;
	const char	*p_s;
	size_t		rm_null;
	size_t		src_len;

	p_d = dest;
	p_s = src;
	rm_null = size - 1;
	src_len = ft_strlen(src);
	if (size <= 0)
		return (src_len);
	while (*p_s != '\0' && rm_null--)
	{
		*p_d++ = *p_s++;
	}
	*p_d = '\0';
	return (src_len);
}

char	*ft_strdup(const char *s)
{
	char		*copy;
	char		*p_s;
	int			len_s;

	if (!s)
		return (NULL);
	p_s = (char *)s;
	len_s = ft_strlen(s);
	copy = (char *)malloc((len_s + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, p_s, (len_s + 1));
	return (copy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	char	*join;
	size_t	len_s1;
	size_t	len_memory;

	if (!s1)
		len_s1 = 0;
	else
		len_s1 = ft_strlen(s1);
	if (!s2)
		s2 = "";
	len_memory = len_s1 + ft_strlen(s2) + 1;
	aux = (char *)malloc(len_memory * sizeof(char));
	if (aux == NULL)
		return (NULL);
	join = aux;
	while (s1 && *s1 != '\0')
		*aux++ = *s1++;
	while (*s2 != '\0')
		*aux++ = *s2++;
	*aux = '\0';
	return (join);
}
