/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:29:19 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string with its index.
 *
 * This function iterates through each character of the string 's' and
 * applies the function 'f' to each character, passing the index of the
 * character and a pointer to the character itself. This can be useful
 * for modifying the string in place or performing actions based on the
 * character's position.
 *
 * @param s The string to be iterated over.
 * @param f The function to apply to each character. This function should
 *           accept an unsigned integer (the index) and a pointer to the
 *           character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
