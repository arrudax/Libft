/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:55:31 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/30 17:25:42 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Reverses an array of integers in place.
 *
 * This function takes a character array 'tab' and its size 'size', and reverses
 * the order of the elements within the array. The function does nothing if
 * the size is less than or equal to zero.
 *
 * @param tab The character array to be reversed.
 * @param size The number of elements in the array.
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
 * @brief Converts a long integer to a string representation.
 *
 * This function converts the given long integer 'n' into a string
 * representation stored in the 'dest' character array. If 'n' is negative,
 * the function adds a '-' sign at the beginning of the string.
 *
 * @param dest The destination character array where the string will be stored.
 * @param n The long integer to convert.
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
 * @brief Writes an integer to a specified file descriptor.
 *
 * This function converts the integer 'n' into a string and writes it
 * to the file descriptor 'fd'. It handles the conversion of negative
 * numbers and ensures the proper output format.
 *
 * @param n The integer to write.
 * @param fd The file descriptor where the integer will be written.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	convert[12];
	int		convert_len;

	itoca(convert, n);
	convert_len = ft_strlen(convert);
	ft_rev_int_tab(convert, convert_len);
	write(fd, convert, convert_len);
}
