/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:27:56 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * This function searches for the first occurrence of the character 'c'
 * in the string 's'. If the character is found, a pointer to the
 * first occurrence is returned. If the character is not found, NULL is returned.
 *
 * @param s The string to be searched.
 * @param c The character to search for (passed as an int).
 * @return A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
