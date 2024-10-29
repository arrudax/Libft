/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:36:12 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:28:44 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a duplicate of a string.
 *
 * This function allocates memory for a new string and copies the content
 * of the string 's' into the newly allocated memory. The new string will
 * be null-terminated. If memory allocation fails, NULL is returned.
 *
 * @param s The string to be duplicated.
 * @return A pointer to the newly allocated string containing the copy of 's',
 *         or NULL if the allocation fails.
 */
char	*ft_strdup(const char *s)
{
	char		*copy;
	char		*p_s;
	int			len_s;

	p_s = (char *)s;
	len_s = ft_strlen(s);
	copy = (char *)malloc((len_s + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, p_s, (len_s + 1));
	return (copy);
}
