/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:55:31 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/29 13:58:11 by maanton2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Reverses an array of integers.
 *
 * This function takes an array `tab` and its size, and reverses the order
 * of the elements in the array in-place.
 *
 * @param tab The array of integers to be reversed.
 * @param size The size of the array.
 */
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

/**
 * @brief Converts a integer to a string representation.
 *
 * This function converts a integer `n` into its string representation
 * and stores it in the `dest` character array. It handles negative numbers
 * and zero appropriately.
 *
 * @param dest The destination character array where the string will be stored.
 * @param n The long integer to be converted.
 */
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

/**
 * @brief Converts an integer to a string.
 *
 * This function takes an integer `n` and converts it to a string
 * representation. It uses the helper function `itoca` to handle the
 * conversion and `ft_rev_int_tab` to reverse the character order.
 *
 * @param n The integer to be converted.
 * 
 * @return A pointer to the newly allocated string representing the integer.
 *         Returns NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	char	convert[12];

	itoca(convert, n);
	ft_rev_int_tab(convert, ft_strlen(convert));
	return (ft_strdup(convert));
}
