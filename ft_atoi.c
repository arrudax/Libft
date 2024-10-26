/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:10:21 by maanton2          #+#    #+#             */
/*   Updated: 2024/10/25 18:20:47 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	skip_whitespace(char **str)
{
	while (**str == 32 || (**str >= 9 && **str <= 13))
		(*str)++;
}

static void	evaluate_sign(int *sign, char **str)
{
	int	count_sign;

	count_sign = 0;
	*sign = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			(*sign)++;
		(*str)++;
		count_sign++;
	}
	if (count_sign > 1)
	{
		*str = "0";
		return ;
	}
	if (*sign % 2 == 0)
		*sign = 1;
	else
		*sign = -1;
}

static int	extract_digits(char **str)
{
	int	result;

	result = 0;
	while (**str >= 48 && **str <= 57)
	{
		result = result * 10 + (**str - '0');
		(*str)++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	char	*p_s;
	int		signal;

	p_s = (char *) str;
	skip_whitespace(&p_s);
	evaluate_sign(&signal, &p_s);
	return (extract_digits(&p_s) * signal);
}
