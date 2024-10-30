/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:25:35 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Writes a character to a specified file descriptor.
 *
 * This function writes the character 'c' to the file descriptor 'fd'.
 * It uses the write system call to output the character.
 *
 * @param c The character to be written.
 * @param fd The file descriptor where the character will be written.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
