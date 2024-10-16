/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:36:12 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/16 19:59:40 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*p_d;
	const char	*p_s;
	size_t		rm_null;
	size_t		src_len;
	size_t		dest_len;

	p_d = dest;
	p_s = src;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	rm_null = size - 1 - dest_len;
	if (size <= dest_len)
		return (size + src_len);
	while (*p_d != '\0')
		p_d++;
	while (*p_s != '\0' && rm_null--)
	{
		*p_d++ = *p_s++;
	}
	*p_d = '\0';
	return (src_len + dest_len);
}
