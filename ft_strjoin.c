/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:59:42 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/18 16:33:11 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	char	*join;
	size_t	len_memory;

	len_memory = ft_strlen(s1) + ft_strlen(s2) + 1;
	aux = (char *)malloc(len_memory * sizeof(char));
	if (aux == NULL)
		return (NULL);
	join = aux;
	while (*s1 != '\0')
		*aux++ = *s1++;
	while (*s2 != '\0')
		*aux++ = *s2++;
	*aux = '\0';
	return (join);
}
