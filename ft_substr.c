/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:59:42 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:35:05 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a substring from a given string.
 *
 * This function allocates and returns a substring from 's1' starting
 * at the index 'start' and extending for a maximum of 'len' characters.
 * If 'start' is beyond the end of 's1', an empty string is returned.
 * If memory allocation fails, NULL is returned.
 *
 * @param s1 The string from which to create the substring.
 * @param start The starting index for the substring.
 * @param len The maximum length of the substring.
 * @return A pointer to the newly allocated substring, or NULL if
 *         memory allocation fails.
 */
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
