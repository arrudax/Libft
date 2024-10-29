/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:11:43 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills a memory block with a specific byte value.
 *
 * This function writes the byte value 'c' to the first 'n' bytes of the
 * memory area pointed to by 's'. It returns a pointer to the memory area 's'.
 *
 * @param s A pointer to the memory area to be filled.
 * @param c The byte value to set (converted to an unsigned char).
 * @param n The number of bytes to set to the value.
 * @return A pointer to the filled memory area (s).
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
