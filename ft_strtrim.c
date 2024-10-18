/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:59:42 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/18 15:18:43 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*p_start;
	char	*p_end;
	char	*sub;
	size_t	len_memory;

	p_start = (char *)s;
	p_end = (char *)s + ft_strlen(s) - 1;
	while (*p_start != '\0' && ft_strchr(set, *p_start))
		p_start++;
	while (p_end > p_start && ft_strchr(set, *p_end))
		p_end--;
	len_memory = p_end - p_start + 1;
	sub = (char *)malloc(sizeof(char) * (len_memory + 1));
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, p_start, len_memory);
	sub[len_memory] = '\0';
	return (sub);
}
