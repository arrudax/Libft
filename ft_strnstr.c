/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/16 22:57:37 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
