/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/14 22:49:51 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*target;

	target = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			target = s;
		s++;
	}
	if (*s == (char)c)
		target = s;
	return ((char *)target);
}
