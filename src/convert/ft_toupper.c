/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:12:34 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:36:07 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * This function takes an integer 'c' representing an ASCII character
 * and converts it to its uppercase equivalent if it is a lowercase
 * letter (a-z). If 'c' is not a lowercase letter, it is returned unchanged.
 *
 * @param c The ASCII value of the character to be converted.
 * @return The uppercase equivalent of 'c' if it is a lowercase letter,
 *         or 'c' unchanged if it is not.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
