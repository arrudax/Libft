/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:55:31 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/24 19:14:18 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rev_int_tab(char *tab, size_t size)
{
	int	iterator;
	int	iterator_reverse;
	int	temp;

	iterator = 0;
	iterator_reverse = size -1;
	if (size <= 0)
		return ;
	while (iterator < iterator_reverse)
	{
		temp = tab[iterator];
		tab[iterator] = tab[iterator_reverse];
		tab[iterator_reverse] = temp;
		iterator++;
		iterator_reverse--;
	}
}

static void	itoca(char *dest, long n)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	if (n == 0)
	{
		dest[i++] = '0';
		dest[i] = '\0';
		return ;
	}
	while (n > 0)
	{
		dest[i++] = '0' + (n % 10);
		n = n / 10;
	}
	if (sign < 0)
		dest[i++] = '-';
	dest[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	convert[12];

	itoca(convert, n);
	ft_rev_int_tab(convert, ft_strlen(convert));
	return (ft_strdup(convert));
}
