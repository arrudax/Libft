/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:07:28 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a memory block.
 *
 * This function scans the first n bytes of the memory area pointed to by s
 * for the character c. It returns a pointer to the matching byte or NULL
 * if the character is not found.
 *
 * @param s A pointer to the memory area to be searched.
 * @param c The character to be located, cast to an unsigned char.
 * @param n The number of bytes to scan.
 * @return A pointer to the first occurrence of the character c in the memory
 *         area, or NULL if c is not found within the first n bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*target;
	unsigned char			ch;

	target = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*target == ch)
			return ((void *)target);
		target++;
	}
	return (NULL);
}
