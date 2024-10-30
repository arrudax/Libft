/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:22:45 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:13:34 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Counts the number of substrings in a string that are separated by a delimiter.
 *
 * This function iterates through the string 's' and counts the number of times a
 * substring is followed by the delimiter 'c' or the end of the string. It returns
 * the total count of such substrings.
 *
 * @param s The string to be evaluated.
 * @param c The delimiter character.
 * @return The count of substrings separated by the delimiter.
 */
static int	slen_to_delimiter(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			i++;
		s++;
	}
	return (i);
}

/**
 * @brief Counts the length of a substring up to a delimiter.
 *
 * This function counts the number of characters in the string 's' until the
 * delimiter character 'c' is encountered. It returns the length of the substring.
 *
 * @param s The string to be evaluated.
 * @param c The delimiter character.
 * @return The length of the substring before the delimiter.
 */
static int	str_len_count_to_delimiter(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * @brief Frees allocated memory for an array of strings.
 *
 * This function takes an array of strings and frees each string as well as
 * the array itself. It returns NULL.
 *
 * @param split The array of strings to be freed.
 * @param count The count of allocated strings.
 * @return NULL.
 */
static void	*free_allocs(char **split, int count)
{
	while (count--)
		free(split[count]);
	free(split);
	return (NULL);
}

/**
 * @brief Allocates memory and copies a substring from the string up to a delimiter.
 *
 * This function allocates memory for a new string that will contain the
 * substring of 's' up to the delimiter 'c'. It updates the count of
 * allocated strings. If memory allocation fails, it frees previously allocated
 * memory and returns NULL.
 *
 * @param s The string to be copied from.
 * @param c The delimiter character.
 * @param count_alloc Pointer to the count of allocated strings.
 * @return A pointer to the newly allocated substring, or NULL on failure.
 */
static char	*alloc_and_copy_str(char const *s, char c, int *count_alloc)
{
	int		str_len;
	char	*aux;

	str_len = str_len_count_to_delimiter(s, c);
	aux = (char *)malloc((str_len + 1) * sizeof(char));
	if (aux == NULL)
	{
		free(aux);
		return (NULL);
	}
	ft_strlcpy(aux, s, str_len + 1);
	(*count_alloc)++;
	return (aux);
}

/**
 * @brief Splits a string into an array of strings using a delimiter.
 *
 * This function takes a string 's' and splits it into an array of strings,
 * separated by the character 'c'. It allocates memory for the array and each
 * substring. If memory allocation fails, it frees all allocated memory and
 * returns NULL.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return An array of strings, or NULL on failure.
 */
char	**ft_split(char const *s, char c)
{
	char	**aux;
	char	**split;
	int		count_alloc;

	count_alloc = 0;
	aux = (char **)malloc((slen_to_delimiter(s, c) + 1) * sizeof(char *));
	if (aux == NULL)
		return (free_allocs(aux, count_alloc));
	split = aux;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		*aux = alloc_and_copy_str(s, c, &count_alloc);
		if (*aux == NULL)
			return (free_allocs(aux, count_alloc));
		aux++;
		s += str_len_count_to_delimiter(s, c);
	}
	*aux = NULL;
	return (split);
}
