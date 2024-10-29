/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:46:58 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 13:51:50 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is an alphabetic character.
 *
 * This function determines whether the passed character `c` is an uppercase
 * (A-Z) or lowercase (a-z) alphabetic character.
 *
 * @param c The character to be checked.
 * 
 * @return Returns a non-zero value (true) if `c` is alphabetic; otherwise, 
 *         returns 0 (false).
 */
int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
