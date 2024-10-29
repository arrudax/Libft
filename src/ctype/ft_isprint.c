/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:01:27 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 13:53:50 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is printable.
 *
 * This function determines whether the passed character `c` is a printable
 * character, which includes space (32) and all visible characters up to
 * tilde (126).
 *
 * @param c The character to be checked.
 * 
 * @return Returns a non-zero value (true) if `c` is printable; 
 *         otherwise, returns 0 (false).
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
