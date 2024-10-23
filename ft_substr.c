/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:59:42 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/22 19:34:54 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	char	*p_s1;
	char	*aux;
	char	*sub;
	size_t	len_memory;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	p_s1 = (char *)s1 + start;
	if (start >= len_s1 || !s1)
		return (ft_strdup(""));
	else if (len_s1 - start < len)
		len_memory = len_s1 - start;
	else
		len_memory = len;
	aux = (char *)malloc(len_memory + 1);
	if (!aux)
		return (NULL);
	sub = aux;
	while (*p_s1 != '\0' && len--)
		*aux++ = *p_s1++;
	*aux = '\0';
	return (sub);
}
