/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:25:46 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Writes a string to a specified file descriptor.
 *
 * This function takes a string 's' and writes it to the file descriptor 'fd'.
 * If the string is NULL, the function does nothing. The length of the string
 * is determined using the `ft_strlen` function.
 *
 * @param s The string to write. If NULL, the function returns immediately.
 * @param fd The file descriptor where the string will be written.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
