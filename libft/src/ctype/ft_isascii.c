/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 13:52:29 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is an ASCII character.
 *
 * This function determines whether the passed character `c` falls within
 * the ASCII range (0-127).
 *
 * @param c The character to be checked.
 * 
 * @return Returns a non-zero value (true) if `c` is an ASCII character; 
 *         otherwise, returns 0 (false).
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
