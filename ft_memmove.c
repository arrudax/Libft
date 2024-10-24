/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:48:38 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/21 23:26:28 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_d;
	unsigned char	*p_s;

	p_d = (unsigned char *)dest;
	p_s = (unsigned char *)src;
	if (p_d == p_s || n == 0)
		return (dest);
	else if (p_d < p_s)
		while (n--)
			*p_d++ = *p_s++;
	else
	{
		p_d += n;
		p_s += n;
		while (n--)
			*--p_d = *--p_s;
	}
	return (dest);
}
/*
int main() {
    char str[] = "josedasilva";  // String original

    printf("Antes do memmove, str = %s\n", str);

    ft_memmove(str + 2, str, 5);

    printf("\nDepois do memmove (com sobreposição), str = %s\n", str);

    return 0;
}*/
