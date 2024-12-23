/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:25:38 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Writes a string to a specified file descriptor followed by a newline.
 *
 * This function outputs the string 's' to the file descriptor 'fd',
 * and appends a newline character after the string.
 *
 * @param s The string to be written. If NULL, no action is performed.
 * @param fd The file descriptor where the string will be written.
 */
void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
