/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:25:49 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:23:51 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Sets the first `len` bytes of the block of memory pointed by `s` to zero.
 *
 * This function is typically used to initialize memory to zero, which can be 
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
