/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 14:32:31 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string and creates a new string.
 *
 * This function iterates through each character of the input string 's',
 * applies the function 'f' to each character along with its index,
 * and returns a new string with the results. The new string is allocated
 * in dynamic memory and should be freed by the caller.
 *
 * @param s The input string to be processed.
 * @param f A pointer to a function that takes an index and a character,
 *          and returns a transformed character.
 * @return A pointer to the new string resulting from the transformations,
 *         or NULL if the allocation fails or if 's' or 'f' is NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*sub;

	i = 0;
	if (!s || !f)
		return (NULL);
	sub = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		sub[i] = f(i, s[i]);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
