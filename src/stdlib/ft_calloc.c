/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:24:35 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Allocates memory for an array of `nmemb` elements of `size` bytes each
 *        and initializes all bytes to zero.
 *
 * This function behaves similarly to the standard `calloc` function. It allocates
 * the requested memory and clears it to ensure that the memory is initialized
 * to zero, which can prevent undefined behavior when using uninitialized memory.
 *
 * @param nmemb Number of elements to allocate.
 * @param size Size of each element in bytes.
 * 
 * @return Pointer to the allocated memory, or NULL if the allocation fails or
 *         if `nmemb` or `size` is zero. If `nmemb` is too large to result in
 *         a valid allocation, it will also return NULL.
 *
 * @note If `nmemb` or `size` is zero, this function returns a pointer to a 
 *       unique block of memory of size zero.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	total_size = nmemb * size;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, total_size);
	return (p);
}
