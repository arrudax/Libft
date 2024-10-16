/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/15 23:57:00 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*p_hs;
	const char	*p_nd;
	size_t		remaining;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len) 
	{
		p_hs = haystack;
		p_nd = needle;
		remaining = len;
		while (*p_hs != '\0' && *p_nd != '\0' && *p_hs == *p_nd && remaining--)
		{
			p_hs++;
			p_nd++;
		}
		if (*p_nd == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
