/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:59:42 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:22:10 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Concatenates two strings into a new string.
 *
 * This function allocates sufficient memory for a new string that
 * contains the contents of 's1' followed by the contents of 's2'.
 * The resulting string is null-terminated. The caller is responsible
 * for freeing the memory allocated for the new string.
 *
 * @param s1 The first string to concatenate.
 * @param s2 The second string to concatenate.
 * @return A pointer to the newly allocated string containing
 *         the concatenation of 's1' and 's2', or NULL if the
 *         allocation fails.
 */
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
