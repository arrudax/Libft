/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:36:12 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:30:35 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends the source string to the destination string.
 *
 * This function appends the contents of the string 'src' to the end
 * of the string 'dest', ensuring that 'dest' is null-terminated
 * and does not exceed the specified size. It calculates the length
 * of both strings to return the total length of the resulting
 * string after concatenation.
 *
 * @param dest The destination string to which 'src' will be appended.
 * @param src The source string to append to 'dest'.
 * @param size The size of the destination buffer.
 * @return The total length of the string that was attempted to
 *         be created (i.e., the length of 'dest' plus the length
 *         of 'src'). If 'size' is less than or equal to the length
 *         of 'dest', the total length of 'src' plus 'size' is returned.
 */
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
