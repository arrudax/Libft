/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:20:29 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Compares two memory blocks byte by byte.
 *
 * This function compares the first n bytes of the memory area pointed to by s1
 * to the first n bytes of the memory area pointed to by s2. It returns an integer
 * less than, equal to, or greater than zero if the first n bytes of s1 are found,
 * respectively, to be less than, to match, or be greater than the first n bytes of s2.
 *
 * @param s1 A pointer to the first memory area to compare.
 * @param s2 A pointer to the second memory area to compare.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first n bytes
 *         of s1 are found to be less than, to match, or be greater than the first n
 *         bytes of s2, respectively.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_1;
	unsigned char	*p_2;

	p_1 = (unsigned char *)s1;
	p_2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p_1 != *p_2)
			return ((unsigned char) *p_1 -(unsigned char)*p_2);
		p_1++;
		p_2++;
	}
	return (0);
}
