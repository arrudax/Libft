/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:22:45 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/22 15:58:41 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

static	void	strlen_delimiter(int *counter, const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			(*counter)++;
		s++;
	}
}

static	void	strlen_to_delimiter(size_t *counter, const char *s, char c)
{
	while (*s && *s != c)
	{
		(*counter)++;
		s++;
	}
}

static void	free_all(char **aux, int count)
{
	while(count--)
		free(aux[count]);
	free(aux);
}

static char	*allocate_and_copy_word(const char **s, char c)
{
	size_t	c_w;
	char	*word;

	c_w = 0;
	strlen_to_delimiter(&c_w, *s, c);
	word = (char *)malloc((c_w + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, *s, c_w + 1);
	*s += c_w;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int			c_d;
	int			count;
	char		**aux;
	char		**split;

	c_d = 0;
	count = 0;
	strlen_delimiter(&c_d, s, c);
	aux = (char **)malloc((c_d + 1) * sizeof(char *));
	if (aux == NULL)
	{
		free_all(aux, count);
		return (NULL);
	}
	split = aux;
	while (*s)
	{
		//SE O DELIMITADOR FOR NO INICIO AQUI PULA.
		if (*s == c)
		{
			s++;
			continue ;
		}
		*aux = allocate_and_copy_word(&s, c);
		if (*aux == NULL)
		{
			free_all(aux, count);
			return (NULL);
		}
		aux++;
		count++;
	}
	*aux = NULL;
	return (split);
}

int	main(void)
{
	char	**r;
	char	s[] = "Tripouille";
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
}
