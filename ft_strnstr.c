/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:33:34 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a substring in a string, up to a specified length.
 *
 * This function searches for the first occurrence of the substring
 * 'little' in the string 'big', considering only the first 'len'
 * characters of 'big'. If 'little' is an empty string, 'big' is
 * returned. If 'little' is not found within 'big', NULL is returned.
 *
 * @param big The string in which to search for the substring.
 * @param little The substring to locate within 'big'.
 * @param len The maximum number of characters to search in 'big'.
 * @return A pointer to the beginning of the located substring, or
 *         NULL if the substring is not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*p_b;
	const char	*p_lt;
	size_t		remaining;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len)
	{
		p_b = big;
		p_lt = little;
		remaining = len;
		while (*p_b != '\0' && *p_lt != '\0' && *p_b == *p_lt && remaining--)
		{
			p_b++;
			p_lt++;
		}
		if (*p_lt == '\0')
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
