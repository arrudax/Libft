/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/16 00:08:35 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_1;
	unsigned char	*p_2;

	p_1 = (unsigned char *)s1;
	p_2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p_1 != *p_2)
			return ((unsigned char) *p_1 -(unsigned char)*p_2);
		p_1++;
		p_2++;
	}
	return (0);
}
