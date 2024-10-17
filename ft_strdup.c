/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:36:12 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/17 16:25:11 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char		*copy;
	 char		*p_s;
	int			len_s;

	p_s = (char *)s;
	len_s = ft_strlen(s);
	copy = (char *)malloc((len_s + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, p_s,(len_s + 1));
	return (copy);
}
/*
int	main(void)
{
	const char *tt = "Amanda";
	ft_strdup(tt);
	return (0);
}*/
