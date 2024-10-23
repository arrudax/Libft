/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:22:45 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/23 15:38:12 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	*free_allocs(char **split, int count)
{
	while (count--)
		free(split[count]);
	free(split);
	return (NULL);
}

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
/*
int	main(void)
{
	char	**r;
	char	s[] = "aaaa bbbbb ccccc ddddd eeeee";
	int		i;

	// Usar a função para dividir a string
		r = ft_split(s, ' ');

	// Imprimir as strings separadas
	for (i = 0; r[i] != NULL; i++)
	{
		printf("r[%d]: %s\n", i, r[i]);
	}

	// Liberar a memória alocada
	for (i = 0; r[i] != NULL; i++)
	{
		free(r[i]);
	}
	free(r);

	return (0);
}*/
