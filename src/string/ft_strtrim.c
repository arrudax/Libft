/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:59:42 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:23:32 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Removes characters from the beginning and end of a string.
 *
 * This function trims the characters specified in 'set' from
 * both ends of the string 's'. The resulting string is dynamically
 * allocated and must be freed by the caller.
 *
 * @param s The string to be trimmed.
 * @param set The set of characters to remove from the beginning and
 *            end of 's'.
 * @return A pointer to the newly allocated string with trimmed characters,
 *         or NULL if memory allocation fails.
 */
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
