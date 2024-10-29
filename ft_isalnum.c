/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:46:58 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 13:50:58 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is alphanumeric.
 *
 * This function determines whether the passed character `c` is either an
 * alphabetic character (A-Z, a-z) or a numeric digit (0-9).
 *
 * @param c The character to be checked.
 * 
 * @return Returns a non-zero value (true) if `c` is alphanumeric; otherwise, 
 *         returns 0 (false).
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
