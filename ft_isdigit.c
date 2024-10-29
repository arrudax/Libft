/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:54 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 13:53:07 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is a digit.
 *
 * This function determines whether the passed character `c` represents
 * a decimal digit (0-9).
 *
 * @param c The character to be checked.
 *
 * @return Returns a non-zero value (true) if `c` is a digit;
 *         otherwise, returns 0 (false).
 */
int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
