/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:36:12 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/16 18:08:50 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
