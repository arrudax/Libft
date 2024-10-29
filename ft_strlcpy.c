/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:36:12 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:31:10 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies the source string to the destination buffer.
 *
 * This function copies up to 'size' - 1 characters from the string 
 * 'src' to 'dest', null-terminating the result. If 'size' is zero, 
 * no characters are copied and the destination string will not be 
 * null-terminated. The total length of the source string is 
 * returned, regardless of the number of characters copied.
 *
 * @param dest The destination buffer where the content is copied to.
 * @param src The source string to be copied.
 * @param size The size of the destination buffer.
 * @return The length of the source string, which is not limited by 
 *         'size'. If 'size' is zero, it returns the length of 'src' 
 *         without copying any characters.
 */
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
