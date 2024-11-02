/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 00:14:21 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:35:33 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * This function takes an integer 'c' representing an ASCII character
 * and converts it to its lowercase equivalent if it is an uppercase
 * letter (A-Z). If 'c' is not an uppercase letter, it is returned unchanged.
 *
 * @param c The ASCII value of the character to be converted.
 * @return The lowercase equivalent of 'c' if it is an uppercase letter,
 *         or 'c' unchanged if it is not.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
