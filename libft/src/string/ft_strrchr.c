/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:23:19 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * This function searches for the last occurrence of the character
 * 'c' in the string 's'. If the character is found, a pointer to
 * its last occurrence is returned. If the character is not found,
 * NULL is returned.
 *
 * @param s The string to search in.
 * @param c The character to locate within the string.
 * @return A pointer to the last occurrence of 'c' in 's', or
 *         NULL if 'c' is not found.
 */
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
