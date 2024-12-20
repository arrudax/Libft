/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:48:31 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:22:54 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Compares two strings up to a specified number of characters.
 *
 * This function compares the first 'n' characters of the strings
 * 'str1' and 'str2'. It stops comparing when a difference is found
 * or when the end of either string is reached. If 'n' is reached
 * without finding a difference, the strings are considered equal.
 *
 * @param str1 The first string to be compared.
 * @param str2 The second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if
 *         'str1' is found, respectively, to be less than, to match,
 *         or be greater than 'str2'.
 */
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
