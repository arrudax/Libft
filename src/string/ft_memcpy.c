/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:20:49 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Copies memory area from source to destination.
 *
 * This function copies n bytes from the memory area pointed to by src
 * to the memory area pointed to by dest. The memory areas must not overlap.
 * If either dest or src is NULL, the function returns NULL.
 *
 * @param dest A pointer to the destination memory area where the content is to be copied.
 * @param src A pointer to the source memory area from which content is to be copied.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory area (dest).
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
