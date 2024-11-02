/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 15:27:26 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Moves memory area from source to destination.
 *
 * This function copies n bytes from the memory area pointed to by src
 * to the memory area pointed to by dest, handling overlapping memory areas.
 * If the source and destination are the same or if n is zero, the function
 * simply returns dest without performing any operation.
 *
 * @param dest A pointer to the destination memory area where the content is to be moved.
 * @param src A pointer to the source memory area from which content is to be moved.
 * @param n The number of bytes to move.
 * @return A pointer to the destination memory area (dest).
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_d;
	unsigned char	*p_s;

	p_d = (unsigned char *)dest;
	p_s = (unsigned char *)src;
	if (p_d == p_s || n == 0)
		return (dest);
	else if (p_d < p_s)
		while (n--)
			*p_d++ = *p_s++;
	else
	{
		p_d += n;
		p_s += n;
		while (n--)
			*--p_d = *--p_s;
	}
	return (dest);
}
