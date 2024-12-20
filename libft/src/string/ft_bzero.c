/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:25:49 by maanton2          #+#    #+#             */
/*   Updated: 2024/11/12 21:48:38 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Sets the first `len` bytes of the block ofmemory pointed
 * by `s` to zero.
 *
 * This function is typically used to initialize memory to zero,
 * which can be
 * useful for setting up structures or buffers before use.
 *
 * @param s Pointer to the block of memory to be set to zero.
 * @param len Number of bytes to set to zero.
 *
 * @note This function does not return a value.
 */
void	ft_bzero(void *s, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (len--)
	{
		*p++ = '\0';
	}
}
